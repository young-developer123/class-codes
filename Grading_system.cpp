/*
	NAME: ELIJAH MUSEMBI
	REG NO.: BSE-05-0111/2024
	DESCRIPTION: CPP CODE FOR GRADING SYSTEM 
*/
#include<iostream>
using namespace std;
int main()
{
	
	float sub1,sub2,sub3,average;
	
	cout<<"ENTER MARKS OF SUBJECT 1: ";
	cin>>sub1;
	
	cout<<"ENTER MARKS OF SUBJECT 2: ";
	cin>>sub2;
	
	cout<<"ENTER MARKS OF SUBJECT 3: ";
	cin>>sub3;
	
	average = (sub1+sub2+sub3)/3;
	
	cout<<"YOUR TOTAL MARKS IS: "<<average<<endl;
	
	if(average>=70 && average<=100)
	{
		cout<<"YOUR FINAL GRADE IS: A";
	}
	
	else if(average>=60 && average<=69)
	{
		cout<<"YOUR FINAL GRADE IS: B";
	}
	
	else if(average>=50 && average<=59)
	{
		cout<<"YOUR FINAL GRADE IS: C";
	}
	
	else if(average>=40 && average<=49)
	{
		cout<<"YOUR FINAL GRADE IS: D";
	}
	
	else if(average>=0 && average<=39)
	{
		cout<<"YOUR FINAL GRADE IS: E (fail)";
	}
	
	else
	{
		cout<<"marks out of range";
	}
	
	
	
	return 0;
}