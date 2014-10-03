#include <queue>
#include <stack>
#include <stdlib.h>
#include <time.h>	
#include <iostream>
#include<vector>
using namespace std;

#ifndef Binary_Search_Tree
#define Binary_Search_Tree
vector<int>v2;


template<class T> class Tree;

template<class T>
class Node {
public:
	Node() { left=right=NULL; }
	Node(const T& el , Node *l=0, Node *r=0) {
		key=el; left=l; right=r;
	}
	T key;
	Node *left, *right;
};

template<class T>
class Tree {
public:
	Tree() { root = 0; }
	~Tree() { clear(); }
	void clear() { clear(root); root = 0; }
	bool isEmpty() { return root == 0; }
	void inorder() { inorder(root); }
	void insert(const T& el);
	void deleteNode(Node<T> *& node);
	void visit(Node<T> *p);
	void balance(vector<T> v2, int first, int last);
	int height(Node<T> *p);
	void display(Node<T> *p);
	Node<T>* search(Node<T>* p,const T& el);
	void findAndDeleteByMerging(const T& el);
	Node<T> *root;
protected:
	void clear(Node<T> *p);
	void inorder(Node<T> *p);

};

template<class T>
void Tree<T>::clear(Node<T> *p)
{
	if (p != 0) {
	     clear(p->left);
	     clear(p->right);
	     delete p;
	}
}

template<class T>
void Tree<T>::inorder(Node<T> *p) {
		if (p!=0) {
		inorder(p->left);
		visit(p);
		inorder(p->right);
	}

}

template<class T>
void Tree<T>::insert(const T &el) {
	Node<T> *p = root, *prev = 0;
	while(p != 0) {
		prev = p;
		if(p->key < el)
			p=p->right;
		else
			p=p->left;
	}
	if(root == 0)
		root = new Node<T>(el);
	else if(prev->key<el)
		prev->right = new Node<T>(el);
	else
		prev->left = new Node<T>(el);
}
template<class T>
void Tree<T>::visit(Node<T> *p)
{
	cout << p->key<<" ";
	v2.push_back (p->key);
	
	


}
template<class T>
void Tree<T>::display(Node<T> *p)
{
	if(p != NULL)
	{
			
			display(p->right);
			cout << p->key << " ";
			display(p->left);
		
	}	

}


template<class T>
void Tree<T>::deleteNode(Node<T> *&node) {
	Node<T> *tmp=node;
	if (node != 0) {
		if (!node->right) // node has no right child: its left
			node = node->left; // child (if any) is attached to its
			// parent;
			else if (node->left == 0) // node has no left child: its right
			node = node->right; // child is attached to its parent;
		else { // be ready for merging subtrees;
			tmp = node->left; // 1. move left
			while (tmp->right != 0)// 2. and then right as far as
// possible;
			tmp = tmp->right;
			tmp->right = // 3. establish the link between
			node->right; // the rightmost node of the left
// subtree and the right subtree;
			tmp = node; // 4.
			node = node->left; // 5.
			}
			delete tmp; // 6.
	}
}

template<class T>
void Tree<T>::findAndDeleteByMerging(const T& el) {
    Node<T> *node = root, *prev = 0;
    while (node != 0) {
        if (node->key == el)
            break;
        prev = node;
        if (el < node->key)
            node = node->left;
        else node = node->right; 
    }
    if (node != 0 && node->key == el)
        if (node == root)
            deleteNode(root);
        else if (prev->left == node)
            deleteNode(prev->left);
        else deleteNode(prev->right);
        else if (root != 0)
            cout << "element" << el << "is not in the tree\n";
        else cout << "the tree is empty\n";
}


template<class T>
int Tree<T>::height(Node<T> *p)
{
	int left,right;

	if (p == NULL)
		return 0;
	left = height(p->left);
	right = height(p->right);
	if (left > right)
		return left + 1;
		
	else
		return right + 1;
		

}

template<class T>
void Tree<T>::balance(vector<T> v2, int first, int last) {
	if (first <= last) {
		int middle = (first + last)/2;
		insert(v2.at(middle));
		balance(v2,first, middle-1);
		balance(v2,middle+1,last);
	}
	
}
template<class T>
Node<T>* Tree<T>::search(Node<T>* p,const T& el)
{
	if(p != 0)
	{
		while (p != 0)
		{
			if (el == p->key)
			{
				cout << "Have"<<endl;
			
				break;
			}
			else if (el < p->key)
			{p = p->left;}
			else 
			{p = p->right;}
		}
	}
	else
	{
		cout << "Dont have"<<endl;
		return 0;
	}
}





#endif // Binary_Search_Tree
