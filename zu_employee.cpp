/*
		NAME: ELIJAH MUSEMBI
		REG NO.: BSE-05-0111/2024
		DESCRIPTION: PROGRAM SHOW DETAILS OF AN EMPLOYEE


	"Write a class named employee that instantiates a zu emp object from the class
	you created. Declare the following data members: idno, name, occupation. Prompt a
	user to enter personal detais such as idno, name, occupation and then create a 
	method named display to display all the values entered by the user."
*/

#include<iostream>
#include<string>
using namespace std;

class employee
{
	public:
		string occupation,name,idno;
		
		string display()
		{
			return "your name is: "+name
			       +"\nyour ID is: "+idno
			       +"\nyour occupation is: "+occupation;
		}
		
};

int main ()
{
	
	employee employee1;
	
	cout<<"\tENTER PERSONAL DETAILS"<<endl;
	
	cout<<"\n1. enter your ID number: ";
	cin>>employee1.idno;
	
	cout<<"\n2. enter your name: ";
	cin>>employee1.name;
	
	cout<<"\n3. enter your occupation: ";
	cin>>employee1.occupation;
	
	string show = employee1.display();
	
	cout<<"\n\tYOUR DETAILS ARE"<<endl;
	cout<<show;
	return 0;
}