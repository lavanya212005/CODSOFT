#include<cstdlib>
#include<ctime>
#include<iostream>
using namespace std;
int main()
{
	cout<<"Challenge yourself with the Number Guessing Game..."<<endl;
	cout<<"Good Luck..."<<endl;
	cout<<"Choose your level and play well.."<<endl;
	cout<<"Guess the number(between 1 to 100): ";
	while(true)
	{
		
		cout<<"1 for easy\t";
		cout<<"2 for medium\t";
		cout<<"3 for difficult\t";
		cout<<"0 for ending the game"<<endl;
		int choice;
		cout<<"Enter your level you want to play: ";
		cin>>choice;
		srand(time(0));
		int secret=1+(rand()%100);
		int player;
		if(choice==1)
		{
			cout<<"you have 10 choices for finding the number";
			int left=10;
			for(int i=1;i<=10;i++)
			{
				cout<<"\n\nEnter a number:";
				cin>>player;
				if(player==secret)
				{
					cout<<"well played! you won the match"<<endl;
					cout<<"\t\t Thanks for playing..."<<endl;
					cout<<"Play again.."<<endl;
					break;
				}
				else
				{
					cout<<"No, "<<player<<" is not a right number."<<endl;
					if(player>secret)
					{
						cout<<"The secret number is smaller than the number you have chosen.";
					}
					else
					{
						cout<<"The secret number is greater than the number you have chosen"<<endl;
					}
					left--;
					cout<<left<<" choices left."<<endl;
					if(left==0)
					{
						cout<<"You couldn't find the secret number it was "<<secret<<" You lose the game"<<endl<<endl;
						cout<<"Play the again to win the match.."<<endl<<endl;
					}
				}
			}
		}
		else if(choice==2)
		{
			cout<<"You have 7 choices for finding the secret number..";
			int left=7;
			for(int i=1;i<=7;i++)
			{
				cout<<endl<<"Enter a number: ";
				cin>>player;
				if(player==secret)
				{
					cout<<"Well played! you win the match"<<player<<"is the secret number"<<endl;
					cout<<"Thanks for playing the game"<<endl;
					cout<<"Play again"<<endl;
					break;
				}
				else
				{
					cout<<"No, "<<player<<" is not a right number."<<endl;
					if(player>secret)
					{
						cout<<"The secret number is smaller than the number you have chosen.";
					}
					else
					{
						cout<<"The secret number is greater than the number you have chosen."<<endl;
					}
					left--;
					cout<<left<<" choices left."<<endl;
					if(left==0)
					{
						cout<<"You couldn't find the secret number it was "<<secret<<" You lose the game"<<endl<<endl;
						cout<<"Play the again to win the match.."<<endl<<endl;
					}
				}
			}
		}
		else if(choice==3)
		{
			cout<<"You have 5 choices for finding the secret number..";
			int left=5;
			for(int i=1;i<=5;i++)
			{
				cout<<endl<<"Enter a number: ";
				cin>>player;
				if(player==secret)
				{
					cout<<"Well played! you win the match"<<player<<"is the secret number"<<endl;
					cout<<"Thanks for playing the game"<<endl;
					cout<<"Play again"<<endl;
					break;
				}
				else
				{
					cout<<"No, "<<player<<" is not a right number."<<endl;
					if(player>secret)
					{
						cout<<"The secret number is smaller than the number you have chosen.";
					}
					else
					{
						cout<<"The secret number is greater than the number you have chosen."<<endl;
					}
					left--;
					cout<<left<<" choices left."<<endl;
					if(left==0)
					{
						cout<<"You couldn't find the secret number it was "<<secret<<" You lose the game"<<endl<<endl;
						cout<<"Play the again to win the match.."<<endl<<endl;
					}
				}
			}
		}
		else if(choice=0)
		{
			exit(0);
		}
		else 
		{
			cout<<"Wrong choice, Enter valid choice to play the game!(0,1,2,3)"<<endl;
		}
	}
	return 0;
}
