/*
	NAME: ELIJAH MUSEMBI
	REG NO.: BSE-05-0111/2024
	DESCRIPTION: PROGRAM TO CALCULATE BMI OF PATIENTS
*/

//START OF PROGRAM
#include<iostream>
using namespace std;
int main()
{
	float weight,height,BMI; //DECLARATION OF VARIABLES TO BE USED IN PROGRAM
	
	cout<<"ENTER YOUR WEIGHT IN KILOGRAMS: ";
	cin>>weight;
	
	cout<<"ENTER YOUR HEIGHT IN METERS: ";
	cin>>height;
	
	BMI = weight/(height*height);
	
	cout<<"YOUR BMI IS: "<<BMI;
	
	//A IF.. ELSE DECISION TO DETERMINE THE CLASS THE PATIENT LAY
	
	if(BMI<18.5)
	{
		cout<<"\nyou are Underweight";
	}
	
	else if(BMI>=18.5 && BMI<=24.9)
	{
		cout<<"\nyou are Normal weight";
	}
	
	else if(BMI>=25 && BMI<=29.9)
	{
		cout<<"\nyou are Overweight";
	}
	
	else if(BMI>30)
	{
		cout<<"\nyou are Obersity";
	}
	
	return 0;
}