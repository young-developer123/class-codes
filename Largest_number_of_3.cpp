/*
	NAME: ELIJAH MUSEMBI
	REG NO.: BSE-05-0111/2024
	DESCRIPTION: PROGRAM TO CHECK THE LARGEST NUMBER OUTOF THREE INPUT

*/

#include<iostream>
using namespace std;
int main()
{
	
	float num1,num2,num3;
	
	cout<<"enter three numbers to check the largest"	<<endl;
	
	cout<<"\nENTER THE FIRST NUMBER: ";
	cin>>num1;
	
	cout<<"\nENTER THE SECOND NUMBER: ";
	cin>>num2;
	
	cout<<"\nENTER THE THIRD NUMBER: ";
	cin>>num3;
	
	if(num1>num2 && num1>num3)
	{
		cout<<"\nthe number you entered first is greater\n";
	}
	
	else if(num2>num1 && num2>num3)
	{
		cout<<"\nThe number you entered secondly is greater\n";
	}
	
	else if(num3>num1 && num3>num2 )
	{
		cout<<"\nthe numbe you entered last is the greater\n";
	}
	return 0;
}