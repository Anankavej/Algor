#include <iostream>
#include <string>
#include "tree.h"
#include<vector>
using namespace std;


int random()
{
	int v1;
	for(int i = 0;i<500;i++)
	{
		 v1 = rand() % 99 + 1;
		 
	} 
	
	return v1;
}


void main()
{
	Tree<int>mytree;
	bool out = false;
	int reply = 0;
	int y = 0;
	srand (time(NULL));
	/*for(int i = 0;i<10;i++)
	{
		mytree.insert(random()); 
	} 
	mytree.inorder();
	cout << endl;
	cout <<"Height :  "<< mytree.height(mytree.root)<<endl;
	mytree.clear();

	cout <<"Balance Height :  "<< mytree.height(mytree.root);*/
	
	while(out == false)
	{
		cout<<endl;
		cout << "Show height : Press1"<<endl;
		cout << "Insert number : Press2"<<endl;
		cout << "Searching Tree : Press3" << endl;
		cout << "Deleting number : Press4"<<endl;
		cout << "Balance : Press5"<<endl;
		cout << "Show : Press6"<<endl;
		cout << "exit : Press7" <<endl;
		cin >> reply;
		switch(reply)
		{
		case 1:
				cout <<"Height :  "<< mytree.height(mytree.root)<<endl;
				cout<<"###########################################"<<endl;
				break;
		case 2:	
				cout << "Enter number"<<endl;
				cin >> y;
				for(int i = 0;i<y;i++)
				{
					mytree.insert(random()); 
				} 
				mytree.inorder();
				cout<<endl;
				cout<<"###########################################"<<endl;
				break;	
		case 3:
			
			cout << "Enter Searching number";
			cin >> y;
			mytree.search(mytree.root,y);
			cout<<"###########################################"<<endl;
			break;
		case 4:
			cout << "Enter num"<<endl;
			cin >> y;
			for(int i = 0;i<y;i++)
				{
					mytree.findAndDeleteByMerging(random());
				} 
			
			break;
		case 5:
			mytree.clear();
			mytree.balance(v2,0,v2.size()-1);
			break;
		case 6:
			mytree.display(mytree.root);
			break;
		case 7:
				out = true;
				break;
	}
	


	}


	


	system("pause");
}
