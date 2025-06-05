/*
	NAME: ELIJAH MUSEMBI
	REG NO: BSE-05-0111/2024
	DESCRIPTION: PROGRAM TO CALCULATE INTEREST

*/

#include<iostream>
using namespace std;

int product (int x, int y);
int reminder (int x, int y);
float division(float x, float  y);


int main()
{
	
	int multiple,rem;
	float div;
	
	multiple = product(10,20);
	cout<<"calling addition: "<<multiple;
	
	
	div=division(30,10);
	cout<<"\ndivision is: "<<div;
	
	rem = reminder(13,2);
	cout<<"\nreminder is: "<<rem;
	
	return 0;
}


int product (int x, int y)
{
	return(x*y);
}

float division(float x, float  y)
{
	return x/y;
}

int reminder (int x, int y)
{
	return(x*y);
}