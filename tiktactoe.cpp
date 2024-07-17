#include<iostream>
using namespace std;
void display(char board[3][3])
{
	cout<<"   "<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<" ";
		for(int j=0;j<3;j++)
		{
			cout<<board[i][j];
			if(j<2)
			cout<<" | ";
		}
		cout<<endl;
		if(i<2)
		cout<<"-----------"<<endl;
	}
}
bool checkwin(char board[3][3],char player)
{
	for(int i=0;i<3;i++)
	{
		
			if((board[i][0]==player&&board[i][1]==player&&board[i][2]==player)||(board[0][i]==player&&board[1][0]==player&&board[2][0]==player))
			{
				return true;
		    }
	}
	if((board[0][0]==player&&board[1][1]==player&&board[2][2]==player)||(board[0][2]==player&&board[1][1]==player&&board[2][0]==player))
			{
				return true;
			}
			return false;
	
}
bool checkdraw(char board[3][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(board[i][j]==' ')
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	char board[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
	char currentplayer='X';
	int row,col;
	cout<<"TIK-TAC-TOE"<<endl;
	display(board);
	while(true)
	{
		cout<<"Player "<<currentplayer<<", enter your move(row and column,eg.,1,2): ";
		cin>>row>>col;
		if(row>=1&&row<=3&&col>=1&&col<=3&&board[row-1][col-1]==' ')
		{
			board[row-1][col-1]=currentplayer;
			display(board);
			if(checkwin(board,currentplayer))
			{
				cout<<"Player "<<currentplayer<<" wins!";
				break;
			}
			if(checkdraw(board))
			{
				cout<<"The game is draw..";
				break;
			}
			currentplayer=(currentplayer=='X')?'O':'X';
		}
		else
		{
			cout<<"Invalid move.Try again later";
			break;
		}
		
	}
	return 0;
}
