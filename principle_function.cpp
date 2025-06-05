/*
	NAME: ELIJAH MUSEMBI
	REG NO: BSE-05-0111/2024
	DESCRIPTION: PROGRAM TO CALCULATE INTEREST

*/

#include<iostream>
using namespace std;

float interest(float a, float b, float c);

int main()
{
	float t_interest, principle, time, rate;
	
	cout<<"ENTER THE PRINCIPLE: ";
	cin>>principle;
	
	cout<<"ENTER THE TIME: ";
	cin>>time;
	
	cout<<"ENTER THE RATE: ";
	cin>>rate;
	
	t_interest=interest(principle,time,rate);
	cout<<"TOTAL INTEREST IS: "<<t_interest;
	
	return 0;
}

float interest(float a, float b, float c)

{
	return (a*b*c)/100;
}