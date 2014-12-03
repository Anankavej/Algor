#include<iostream>
#include <time.h>   
#include <ctime>   
using namespace std;

const int X = 1,O = -1,EMPTY = 0;
int board[6][7];
int currentplayer = false;
bool checkselect;
int v ;
void clearBoard()
{
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<6;j++)
		{
			board[i][j] = EMPTY;
		}
	}
	currentplayer = X;
} 
void pushMark(int i,int j)
{
	
	
		board[i][j] = currentplayer;
		currentplayer = -currentplayer;
	
}
void selected(int x)
{
	cout << "Enter number  1-7"<<endl;
		cin >> x;
		if(x <= 7 && x >= 1)
		{
			
		if(x == 1)
		{
			if(board[5][0] == EMPTY)
			{
				pushMark(5,0);
			}
			else if(board[4][0] == EMPTY)
			{
				pushMark(4,0);
			}
			else if(board[3][0] == EMPTY)
			{
				pushMark(3,0);
			}
			else if(board[2][0] == EMPTY)
			{
				pushMark(2,0);
			}
			else if(board[1][0] == EMPTY)
			{
				pushMark(1,0);
			}
			else if(board[0][0] == EMPTY)
			{
				pushMark(0,0);
			}
			
			else
			{
				cout << "fill agian"<<endl;
				selected(x);
			}
		}
		if(x == 2)
		{
			if(board[5][1] == EMPTY)
			{
				pushMark(5,1);
			}
			else if(board[4][1] == EMPTY)
			{
				pushMark(4,1);
			}
			else if(board[3][1] == EMPTY)
			{
				pushMark(3,1);
			}
			else if(board[2][1] == EMPTY)
			{
				pushMark(2,1);
			}
			else if(board[1][1] == EMPTY)
			{
				pushMark(1,1);
			}
			else if(board[0][1] == EMPTY)
			{
				pushMark(0,1);
			}
			
			else
			{
				cout << "fill agian"<<endl;
				selected(x);
			}
		}
		if(x == 3)
		{
			if(board[5][2] == EMPTY)
			{
				pushMark(5,2);
			}
			else if(board[4][2] == EMPTY)
			{
				pushMark(4,2);
			}
			else if(board[3][2] == EMPTY)
			{
				pushMark(3,2);
			}
			else if(board[2][2] == EMPTY)
			{
				pushMark(2,2);
			}
			else if(board[1][2] == EMPTY)
			{
				pushMark(1,2);
			}
			else if(board[0][2] == EMPTY)
			{
				pushMark(0,2);
			}
			
			else
			{
				cout << "fill agian"<<endl;
				selected(x);
			}
		}
		if(x == 4)
		{
			if(board[5][3] == EMPTY)
			{
				pushMark(5,3);
			}
			else if(board[4][3] == EMPTY)
			{
				pushMark(4,3);
			}
			else if(board[3][3] == EMPTY)
			{
				pushMark(3,3);
			}
			else if(board[2][3] == EMPTY)
			{
				pushMark(2,3);
			}
			else if(board[1][3] == EMPTY)
			{
				pushMark(1,3);
			}
			else if(board[0][3] == EMPTY)
			{
				pushMark(0,3);
			}
			
			else
			{
				cout << "fill agian"<<endl;
				selected(x);
			}
		}
		if(x == 5)
		{
			if(board[5][4] == EMPTY)
			{
				pushMark(5,4);
			}
			else if(board[4][4] == EMPTY)
			{
				pushMark(4,4);
			}
			else if(board[3][4] == EMPTY)
			{
				pushMark(3,4);
			}
			else if(board[2][4] == EMPTY)
			{
				pushMark(2,4);
			}
			else if(board[1][4] == EMPTY)
			{
				pushMark(1,4);
			}
			else if(board[0][4] == EMPTY)
			{
				pushMark(0,4);
			}
			
			else
			{
				cout << "fill agian"<<endl;
				selected(x);
			}
		}
		if(x == 6)
		{
			if(board[5][5] == EMPTY)
			{
				pushMark(5,5);
			}
			else if(board[4][5] == EMPTY)
			{
				pushMark(4,5);
			}
			else if(board[3][5] == EMPTY)
			{
				pushMark(3,5);
			}
			else if(board[2][5] == EMPTY)
			{
				pushMark(2,5);
			}
			else if(board[1][5] == EMPTY)
			{
				pushMark(1,5);
			}
			else if(board[0][5] == EMPTY)
			{
				pushMark(0,5);
			}
			
			else
			{
				cout << "fill agian"<<endl;
				selected(x);
			}
		}
		if(x == 7)
		{
			if(board[5][6] == EMPTY)
			{
				pushMark(5,6);
			}
			else if(board[4][6] == EMPTY)
			{
				pushMark(4,6);
			}
			else if(board[3][6] == EMPTY)
			{
				pushMark(3,6);
			}
			else if(board[2][6] == EMPTY)
			{
				pushMark(2,6);
			}
			else if(board[1][6] == EMPTY)
			{
				pushMark(1,6);
			}
			else if(board[0][6] == EMPTY)
			{
				pushMark(0,6);
			}
			
			else
			{
				cout << "fill agian"<<endl;
				selected(x);
			}
		}
		
		}
		else
		{
			cout<<"Out of Range"<<endl;
			selected(x);

		}
		
		
}
void selectedai(int x)
{
	v = 0;
	if(x == 1)
		{
			if(board[5][0] == EMPTY)
			{
				pushMark(5,0);
			}
			else if(board[4][0] == EMPTY)
			{
				pushMark(4,0);
			}
			else if(board[3][0] == EMPTY)
			{
				pushMark(3,0);
			}
			else if(board[2][0] == EMPTY)
			{
				pushMark(2,0);
			}
			else if(board[1][0] == EMPTY)
			{
				pushMark(1,0);
			}
			else if(board[0][0] == EMPTY)
			{
				pushMark(0,0);
			}
			
			else
			{
				srand (time(NULL));
				v = rand() % 7 + 1;
				selectedai(v);
			}
		}
		if(x == 2)
		{
			if(board[5][1] == EMPTY)
			{
				pushMark(5,1);
			}
			else if(board[4][1] == EMPTY)
			{
				pushMark(4,1);
			}
			else if(board[3][1] == EMPTY)
			{
				pushMark(3,1);
			}
			else if(board[2][1] == EMPTY)
			{
				pushMark(2,1);
			}
			else if(board[1][1] == EMPTY)
			{
				pushMark(1,1);
			}
			else if(board[0][1] == EMPTY)
			{
				pushMark(0,1);
			}
			
			else
			{
				srand (time(NULL));
				v = rand() % 7 + 1;
				selectedai(v);
			}
		}
		if(x == 3)
		{
			if(board[5][2] == EMPTY)
			{
				pushMark(5,2);
			}
			else if(board[4][2] == EMPTY)
			{
				pushMark(4,2);
			}
			else if(board[3][2] == EMPTY)
			{
				pushMark(3,2);
			}
			else if(board[2][2] == EMPTY)
			{
				pushMark(2,2);
			}
			else if(board[1][2] == EMPTY)
			{
				pushMark(1,2);
			}
			else if(board[0][2] == EMPTY)
			{
				pushMark(0,2);
			}
			
			else
			{
				srand (time(NULL));
				v = rand() % 7 + 1;
				selectedai(v);
			}
		}
		if(x == 4)
		{
			if(board[5][3] == EMPTY)
			{
				pushMark(5,3);
			}
			else if(board[4][3] == EMPTY)
			{
				pushMark(4,3);
			}
			else if(board[3][3] == EMPTY)
			{
				pushMark(3,3);
			}
			else if(board[2][3] == EMPTY)
			{
				pushMark(2,3);
			}
			else if(board[1][3] == EMPTY)
			{
				pushMark(1,3);
			}
			else if(board[0][3] == EMPTY)
			{
				pushMark(0,3);
			}
			
			else
			{
				srand (time(NULL));
				v = rand() % 7 + 1;
				selectedai(v);
			}
		}
		if(x == 5)
		{
			if(board[5][4] == EMPTY)
			{
				pushMark(5,4);
			}
			else if(board[4][4] == EMPTY)
			{
				pushMark(4,4);
			}
			else if(board[3][4] == EMPTY)
			{
				pushMark(3,4);
			}
			else if(board[2][4] == EMPTY)
			{
				pushMark(2,4);
			}
			else if(board[1][4] == EMPTY)
			{
				pushMark(1,4);
			}
			else if(board[0][4] == EMPTY)
			{
				pushMark(0,4);
			}
			
			else
			{
				srand (time(NULL));
				v = rand() % 7 + 1;
				selectedai(v);
			}
		}
		if(x == 6)
		{
			if(board[5][5] == EMPTY)
			{
				pushMark(5,5);
			}
			else if(board[4][5] == EMPTY)
			{
				pushMark(4,5);
			}
			else if(board[3][5] == EMPTY)
			{
				pushMark(3,5);
			}
			else if(board[2][5] == EMPTY)
			{
				pushMark(2,5);
			}
			else if(board[1][5] == EMPTY)
			{
				pushMark(1,5);
			}
			else if(board[0][5] == EMPTY)
			{
				pushMark(0,5);
			}
			
			else
			{
				srand (time(NULL));
				v = rand() % 7 + 1;
				selectedai(v);
			}
		}
		if(x == 7)
		{
			if(board[5][6] == EMPTY)
			{
				pushMark(5,6);
			}
			else if(board[4][6] == EMPTY)
			{
				pushMark(4,6);
			}
			else if(board[3][6] == EMPTY)
			{
				pushMark(3,6);
			}
			else if(board[2][6] == EMPTY)
			{
				pushMark(2,6);
			}
			else if(board[1][6] == EMPTY)
			{
				pushMark(1,6);
			}
			else if(board[0][6] == EMPTY)
			{
				pushMark(0,6);
			}
			
			else
			{
				srand (time(NULL));
				v = rand() % 7 + 1;
				selectedai(v);
			}
		}
		
}
bool isWin(int mark)
{
	int win = 4*mark;
	return (
		//////row1////////
	   board[5][0]+board[5][1]+board[5][2]+board[5][3] == win
	|| board[5][1]+board[5][2]+board[5][3]+board[5][4] == win
	|| board[5][2]+board[5][3]+board[5][4]+board[5][5] == win
	|| board[5][3]+board[5][4]+board[5][5]+board[5][6] == win
		//////row2////////
	|| board[4][0]+board[4][1]+board[4][2]+board[4][3] == win
	|| board[4][1]+board[4][2]+board[4][3]+board[4][4] == win
	|| board[4][2]+board[4][3]+board[4][4]+board[4][5] == win
	|| board[4][3]+board[4][4]+board[4][5]+board[4][6] == win
	//////row3////////
	|| board[3][0]+board[3][1]+board[3][2]+board[3][3] == win
	|| board[3][1]+board[3][2]+board[3][3]+board[3][4] == win
	|| board[3][2]+board[3][3]+board[3][4]+board[3][5] == win
	|| board[3][3]+board[3][4]+board[3][5]+board[3][6] == win
	//////row4////////
	|| board[2][0]+board[2][1]+board[2][2]+board[2][3] == win
	|| board[2][1]+board[2][2]+board[2][3]+board[2][4] == win
	|| board[2][2]+board[2][3]+board[2][4]+board[2][5] == win
	|| board[2][3]+board[2][4]+board[2][5]+board[2][6] == win
	//////row5////////
	|| board[1][0]+board[1][1]+board[1][2]+board[1][3] == win
	|| board[1][1]+board[1][2]+board[1][3]+board[1][4] == win
	|| board[1][2]+board[1][3]+board[1][4]+board[1][5] == win
	|| board[1][3]+board[1][4]+board[1][5]+board[1][6] == win
	//////row6////////
	|| board[0][0]+board[0][1]+board[0][2]+board[0][3] == win
	|| board[0][1]+board[0][2]+board[0][3]+board[0][4] == win
	|| board[0][2]+board[0][3]+board[0][4]+board[0][5] == win
	|| board[0][3]+board[0][4]+board[0][5]+board[0][6] == win
	//////column1////////
	||  board[0][0]+board[1][0]+board[2][0]+board[3][0] == win
	||  board[1][0]+board[2][0]+board[3][0]+board[4][0] == win
	||  board[2][0]+board[3][0]+board[4][0]+board[5][0] == win
	//////column2////////
	||  board[0][1]+board[1][1]+board[2][1]+board[3][1] == win
	||  board[1][1]+board[2][1]+board[3][1]+board[4][1] == win
	||  board[2][1]+board[3][1]+board[4][1]+board[5][1] == win
	//////column3////////
	||  board[0][2]+board[1][2]+board[2][2]+board[3][2] == win
	||  board[1][2]+board[2][2]+board[3][2]+board[4][2] == win
	||  board[2][2]+board[3][2]+board[4][2]+board[5][2] == win
	//////column4////////
	||  board[0][3]+board[1][3]+board[2][3]+board[3][3] == win
	||  board[1][3]+board[2][3]+board[3][3]+board[4][3] == win
	||  board[2][3]+board[3][3]+board[4][3]+board[5][3] == win
	//////column5////////
	||  board[0][4]+board[1][4]+board[2][4]+board[3][4] == win
	||  board[1][4]+board[2][4]+board[3][4]+board[4][4] == win
	||  board[2][4]+board[3][4]+board[4][4]+board[5][4] == win
	//////column6////////
	||  board[0][5]+board[1][5]+board[2][5]+board[3][5] == win
	||  board[1][5]+board[2][5]+board[3][5]+board[4][5] == win
	||  board[2][5]+board[3][5]+board[4][5]+board[5][5] == win
	//////column7////////
	||  board[0][6]+board[1][6]+board[2][6]+board[3][6] == win
	||  board[1][6]+board[2][6]+board[3][6]+board[4][6] == win
	||  board[2][6]+board[3][6]+board[4][6]+board[5][6] == win
	///////////cr1/////////
	||  board[5][0]+board[4][1]+board[3][2]+board[2][3] == win
	||  board[4][1]+board[3][2]+board[2][3]+board[1][4] == win
	||  board[3][2]+board[2][3]+board[1][4]+board[0][5] == win
	///////////cr2/////////
	||  board[4][0]+board[3][1]+board[2][2]+board[1][3] == win
	||  board[3][1]+board[2][2]+board[1][3]+board[0][4] == win
	||  board[3][0]+board[2][1]+board[1][2]+board[0][3] == win
	///////////cr3/////////
	||  board[5][1]+board[4][2]+board[3][3]+board[2][4] == win
	||  board[4][2]+board[3][3]+board[2][4]+board[1][5] == win
	||  board[3][3]+board[2][4]+board[1][5]+board[0][6] == win
	///////////cr4////////
	||  board[5][2]+board[4][3]+board[3][4]+board[2][5] == win
	||  board[4][3]+board[3][4]+board[2][5]+board[1][6] == win
	||  board[5][3]+board[4][4]+board[3][5]+board[2][6] == win
	///////////rc1////////
	||  board[5][6]+board[4][5]+board[3][4]+board[2][3] == win
	||  board[4][5]+board[3][4]+board[2][3]+board[1][2] == win
	||  board[3][4]+board[2][3]+board[1][2]+board[0][1] == win
	///////////rc2////////
	||  board[4][6]+board[3][5]+board[2][4]+board[1][3] == win
	||  board[3][5]+board[2][4]+board[1][3]+board[0][2] == win
	||  board[3][6]+board[2][5]+board[1][4]+board[0][3] == win
	///////////rc3////////
	||  board[5][5]+board[4][4]+board[3][3]+board[2][2] == win
	||  board[4][4]+board[3][3]+board[2][2]+board[1][1] == win
	||  board[3][3]+board[2][2]+board[1][1]+board[0][0] == win
	///////////rc5////////
	||  board[5][4]+board[4][3]+board[3][2]+board[2][1] == win
	||  board[4][3]+board[3][2]+board[2][1]+board[1][0] == win
	||  board[5][3]+board[4][4]+board[3][1]+board[2][0] == win
	);
		

}
int getWinner()
{
	if(isWin(X))
	{
		return 'X';
	}
	else if(isWin(O))
	{
		return 'O';
	}
	else
	{
		return EMPTY;
	}

};
void printBoard(){
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<7;j++)
		{
			switch(board[i][j])
			{
			case X:
					cout << "X";
					break;
			case O:
					cout << "O";
					break;
			case EMPTY:
					cout << " ";
					break;
			}
			if(j<6)
			{cout << " |";}
		}
		if(i<5)
		{cout << "\n--+--+--+--+--+--+--\n";}


	}


};
void ai()
{
	
	v = 0;
	if(!checkselect)
	{
		
		



		for(int i=0;i<6;i++)
			{
				for(int j=0;j<7;j++)
				{
								///////////////base//////////////////
								if(board[5][j]== O && board[5][j+1] == O &&board[5][j+2]== O && board[5][j+3] == EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
											{
												pushMark(5,j+3);checkselect = true;
				
											}
											else if(board[5][j]== O && board[5][j+1] == O &&board[5][j+2]== EMPTY && board[5][j+3] == O && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
											{
												pushMark(5,j+2);checkselect = true;
				
											}
											else if(board[5][j]== O && board[5][j+1] == EMPTY &&board[5][j+2]== O && board[5][j+3] == O && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
											{
												pushMark(5,j+1);checkselect = true;
				
											}
											else if(board[5][j]== EMPTY && board[5][j+1] == O &&board[5][j+2]== O && board[5][j+3] == O && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
											{
												pushMark(5,j);checkselect = true;
				
											}
											else if(board[i][j]== O && board[i][j+1] == O &&board[i][j+2]== O && board[i][j+3] == EMPTY && board[i+1][j+3] != EMPTY  && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
											{
												pushMark(i,j+3);checkselect = true;
											}
											else if(board[i][j]== O && board[i][j+1] == O &&board[i][j+2]== EMPTY && board[i][j+3] == O && board[i+1][j+2] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
											{
												pushMark(i,j+2);checkselect = true;
				
											}
											else if(board[i][j]== O && board[i][j+1] == EMPTY &&board[i][j+2]== O && board[i][j+3] == O && board[i+1][j+1] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
											{
												pushMark(i,j+1);checkselect = true;
				
											}
											else if(board[i][j]== EMPTY && board[i][j+1] == O &&board[i][j+2]== O && board[i][j+3] == O && board[i+1][j] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
											{
												pushMark(i,j);checkselect = true;
				
											}
											/////////////col/////////////////
											else if(board[i+3][j]== O && board[i+2][j] == O &&board[i+1][j]== O && board[i][j] == EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
											{
											pushMark(i,j);checkselect = true;
											}
											//////////////////////cr//////////////
										else if(board[i][j]== O && board[i-1][j+1] == O &&board[i-2][j+2]== O && board[i-3][j+3] == EMPTY && board[i-2][j+3] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i-3,j+3);checkselect = true;
										}
										else if(board[i][j]== O && board[i-1][j+1] == O &&board[i-2][j+2]== EMPTY && board[i-3][j+3] == O && board[i-1][j+2] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i-2,j+2);checkselect = true;
										}
										else if(board[i][j]== O && board[i-1][j+1] == EMPTY &&board[i-2][j+2]== O && board[i-3][j+3] == O && board[i][j+1] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i-1,j+1);checkselect = true;
										}
										else if(board[i][j]== EMPTY && board[i-1][j+1] == O &&board[i-2][j+2]== O && board[i-3][j+3] == O && board[i+1][j] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i,j);checkselect = true;
										}
										
										//////////////////////rc//////////////
										else if(board[i][j]== O && board[i-1][j-1] == O &&board[i-2][j-2]== O && board[i-3][j-3] == EMPTY && board[i-2][j-3] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i-3,j-3);checkselect = true;
										}
										else if(board[i][j]== O && board[i-1][j-1] == O &&board[i-2][j-2]== EMPTY && board[i-3][j-3] == O && board[i-1][j-2] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i-2,j-2);checkselect = true;
										}
										else if(board[i][j]== O && board[i-1][j-1] == EMPTY &&board[i-2][j-2]== O && board[i-3][j-3] == O && board[i][j-1] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i-1,j-1);checkselect = true;
										}
										else if(board[i][j]== EMPTY && board[i-1][j-1] == O &&board[i-2][j-2]== O && board[i-3][j-3] == O && board[i+1][j+1] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i,j);checkselect = true;
										}
										else if(board[5][j]== EMPTY && board[i-1][j-1] == O &&board[i-2][j-2]== O && board[i-3][j-3] == O && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(5,j);checkselect = true;
										}
				}

		}
		for(int i=0;i<6;i++)
			{
				for(int j=0;j<7;j++)
					{/////////////////row//////////////
										if(board[i][j]== X && board[i][j+1] == X &&board[i][j+2]== X && board[i][j+3] == EMPTY && board[i+1][j+3] != EMPTY  && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i,j+3);checkselect = true;
										}
										else if(board[i][j]== X && board[i][j+1] == X &&board[i][j+2]== EMPTY && board[i][j+3] == X && board[i+1][j+2] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i,j+2);checkselect = true;
				
										}
										else if(board[i][j]== X && board[i][j+1] == EMPTY &&board[i][j+2]== X && board[i][j+3] == X && board[i+1][j+1] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i,j+1);checkselect = true;
				
										}
										else if(board[i][j]== EMPTY && board[i][j+1] == X &&board[i][j+2]== X && board[i][j+3] == X && board[i+1][j] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i,j);checkselect = true;
				
										}
										//////base///////
										else if(board[5][j]== X && board[5][j+1] == X &&board[5][j+2]== X && board[5][j+3] == EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(5,j+3);checkselect = true;
				
										}
										else if(board[5][j]== X && board[5][j+1] == X &&board[5][j+2]== EMPTY && board[5][j+3] == X && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(5,j+2);checkselect = true;
				
										}
										else if(board[5][j]== X && board[5][j+1] == EMPTY &&board[5][j+2]== X && board[5][j+3] == X && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(5,j+1);checkselect = true;
				
										}
										else if(board[5][j]== EMPTY && board[5][j+1] == X &&board[5][j+2]== X && board[5][j+3] == X && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(5,j);checkselect = true;
				
										}


										/////////////col/////////////////
										else if(board[i+3][j]== X && board[i+2][j] == X &&board[i+1][j]== X && board[i][j] == EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i,j);checkselect = true;
										}
										//////////////////////cr//////////////
										else if(board[i][j]== X && board[i-1][j+1] == X &&board[i-2][j+2]== X && board[i-3][j+3] == EMPTY && board[i-2][j+3] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i-3,j+3);checkselect = true;
										}
										else if(board[i][j]== X && board[i-1][j+1] == X &&board[i-2][j+2]== EMPTY && board[i-3][j+3] == X && board[i-1][j+2] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i-2,j+2);checkselect = true;
										}
										else if(board[i][j]== X && board[i-1][j+1] == EMPTY &&board[i-2][j+2]== X && board[i-3][j+3] == X && board[i][j+1] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i-1,j+1);checkselect = true;
										}
										else if(board[i][j]== EMPTY && board[i-1][j+1] == X &&board[i-2][j+2]== X && board[i-3][j+3] == X && board[i+1][j] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i,j);checkselect = true;
										}
										else if(board[5][j]== EMPTY && board[i-1][j+1] == X &&board[i-2][j+2]== X && board[i-3][j+3] == X && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(5,j);checkselect = true;
										}
										//////////////////////rc//////////////
										else if(board[i][j]== X && board[i-1][j-1] == X &&board[i-2][j-2]== X && board[i-3][j-3] == EMPTY && board[i-2][j-3] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i-3,j-3);checkselect = true;
										}
										else if(board[i][j]== X && board[i-1][j-1] == X &&board[i-2][j-2]== EMPTY && board[i-3][j-3] == X && board[i-1][j-2] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i-2,j-2);checkselect = true;
										}
										else if(board[i][j]== X && board[i-1][j-1] == EMPTY &&board[i-2][j-2]== X && board[i-3][j-3] == X && board[i][j-1] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i-1,j-1);checkselect = true;
										}
										else if(board[i][j]== EMPTY && board[i-1][j-1] == X &&board[i-2][j-2]== X && board[i-3][j-3] == X && board[i+1][j+1] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i,j);checkselect = true;
										}
										else if(board[5][j]== EMPTY && board[i-1][j-1] == X &&board[i-2][j-2]== X && board[i-3][j-3] == X && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(5,j);checkselect = true;
										}
											}
							}
					
										///////////////////////////////////////////2////////////////////////////////////////////
										
										
							for(int i=0;i<6;i++)
										{
								for(int j=0;j<7;j++)
										{
											///base///
										 if(board[5][j]== X && board[5][j+1] == EMPTY &&board[5][j+2]== X  && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(5,j+1);checkselect = true;
										}
										else if(board[5][j]== EMPTY && board[5][j+1] == X &&board[5][j+2]== X  && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(5,j);checkselect = true;
										}
										else if(board[5][j]== X && board[5][j+1] == X &&board[5][j+2]== EMPTY  && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(5,j+2);checkselect = true;
										}
										/////////row////////
										else if(board[i][j]== X && board[i][j+1] == EMPTY &&board[i][j+2]== X && board[i+1][j+1] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i,j+1);checkselect = true;
										}
										else if(board[i][j]== EMPTY && board[i][j+1] == X &&board[i][j+2]== X  && board[i+1][j] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i,j);checkselect = true;
										}
										else if(board[i][j]== X && board[i][j+1] == X &&board[i][j+2]== EMPTY   && board[i+1][j+2] != EMPTY  && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i,j+2);checkselect = true;
										}
										//////col///
										else if(board[i+2][j] == X &&board[i+1][j]== X && board[i][j] == EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i,j);checkselect = true;
										}
										////////////////rc//////////
										else if(board[i][j]== X && board[i-1][j+1] == X &&board[i-2][j+2]== EMPTY && board[i-1][j+2] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i-2,j+2);checkselect = true;
										}
										else if(board[i][j]== X && board[i-1][j+1] == EMPTY &&board[i-2][j+2]== X && board[i][j+1] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i-1,j+1);checkselect = true;
										}
										else if(board[i][j]== EMPTY && board[i-1][j+1] == X &&board[i-2][j+2]== X && board[i+1][j] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i,j);checkselect = true;
										}
										///////////////cr////////////
										else if(board[i][j]== X && board[i-1][j-1] == X &&board[i-2][j-2]== EMPTY &&board[i-1][j-2] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i-2,j-2);checkselect = true;
										}
										else if(board[i][j]== X && board[i-1][j-1] == EMPTY &&board[i-2][j-2]== X &&board[i][j-2] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i-2,j-2);checkselect = true;
										}
										else if(board[i][j]== EMPTY && board[i-1][j-1] == X &&board[i-2][j-2]== X &&board[i+1][j] != EMPTY && checkselect == false&&( i == 0||i ==1||i ==2||i ==3||i ==4||i ==5 )&& (j == 0||j ==1||j ==2||j ==3||j ==4||j ==5||j ==6))
										{
											pushMark(i,j);checkselect = true;
										}
										
							
								
								}
							}
					
			
			
		}
		
			srand (time(NULL));
		if(!checkselect)
		{
			v = rand() % 7 + 1;
			selectedai(v);
			
		}
		checkselect = false;
	
		
}
int main()
{
	int x = 0;
	clearBoard();
	

	while(getWinner() == EMPTY)
	{
		selected(x);
		ai();
		//ai();
		//system("cls");
	printBoard();
	
	int winner = getWinner();
	if(winner != EMPTY)
	{
		if(winner == 79)
		{
			cout << endl;
			cout << " O is win"<<endl;
			break;
		}
		else if(winner == 88)
		{
			cout << endl;
			cout << " X is win"<<endl;
			break;
		}
	}
	else
	{
		cout << endl;
		/*if(board[0][0] != EMPTY && board[0][1] != EMPTY  != EMPTY && board[0][2] != EMPTY && board[1][0] != EMPTY && board[1][1] != EMPTY && board[1][2] != EMPTY && board[2][0] != EMPTY && board[2][1] != EMPTY && board[2][2])
		{
			cout << endl;
			cout << "Draw"<<endl;
			break;

		}*/
	}
}
	cout << endl;
	

	cout << "\n\n\n";
	system("pause");
	return EXIT_SUCCESS;



}
