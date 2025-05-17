#include<iostream>
#include<string>
using namespace std;
int main()
{
	char operater;
	int num1 , num2;
	
	cout<<"enter first number: ";
	cin>>num1;
	
	cout<<"enter the operater: ";
	cin>>operater;
	
	cout<<"enter second number: ";
	cin>>num2;
	
	switch(operater)
	{
		case '+':
			cout<<"answer for addition is: "<<num1+num2;
			break;
		case '-':
			cout<<"answer for substraction is: "<<num1-num2;
			break;
		case '*':
			cout<<"answer for multiplication is: "<<num1*num2;
			break;
		case '/':
			cout<<"answer for division is: "<<num1/num2;
			break;	
		case '%':
			cout<<"answer for remainder is: "<<num1 % num2;
			break;	
		default:
			cout<<"operational error";			
	}
	return 0;
}