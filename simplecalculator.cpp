#include<iostream>
using namespace std;
int main()
{
	double num1,num2;
	char s;
	cout<<"Enter a First number: ";
	cin>>num1;
	cout<<"Enter a Second number: ";
	cin>>num2;
	cout<<"Enter operation: ";
	cin>>s;
	switch(s)
	{
		case '+':
			cout<<num1+num2;
			break;
		case '-':
			cout<<num1-num2;
			break;
		case '*':
			cout<<num1*num2;
			break;
		case '/':
			if(num2!=0)
			{
				cout<<num1/num2;
			}
			else
			{
				cout<<"Error: Division by zero";
			}
			break;
		default:
			cout<<"Invalid operation";
			break;
	}
}
