/*
	NAME: ELIJAH MUSEMBI
	REG NO.: BSE-05-0111/2024
	DESCRIPTION: THIS IS BANK ACCOUNT SYSTEM

*/
#include<windows.h>
#include<iostream>
#include<string> //this is a cpp line that enables use string data type

using namespace std;

class Account_Holder  //this is the parent class
{
	protected:
		string name;
		
		public:
			
			//this is a method to set name		 
			void setname(string n)
			{
				name = n;
			}
			
			//this returns name 
			string getname()
			{
				return name;
			}		
};

class Bank_Account : public Account_Holder  //this is the child class 
{
	private:
		int account_number;
		double balance;
		
	public:
		//this is the constructor initialization
		Bank_Account(string n, int accNo, double bal)	
		{
			name = n;
    		account_number = accNo;
    		balance = bal;
    		
			cout << "BankAccount for " << name << " initialized.\n";
		}
		
		int Get_Account_Number()
		{
			return account_number;
		}
		
		double Get_Balance()
		{
			return balance;
		}
};

class Saving_Account : Bank_Account
{
	private:
		double Intrest_Rate;
		
		Saving_Account(string n, int accNo, double bal, double rate) 
		:Bank_Account(n,accNo,bal),Intrest_Rate(rate)
		{
		
		}	
};

int main()
{
	//this is bank statement for person1
	Bank_Account person1("elijah",1234,55000);//this is object for class
	
	//this outputs the details of person1
	cout<<"\nYOUR OUTSTANDING BALANCE IS: "<<person1.Get_Balance();
	cout<<" FOR ACCOUNT NUMBER: "<<person1.Get_Account_Number();
	
	
    //int startFreq = 1000;   // Starting frequency in Hz
    //int endFreq = 200;      // Ending frequency
    //int duration = 100;     // Duration of each beep in ms

    //for (int freq = startFreq; freq >= endFreq; freq -= 100) {
    //    Beep(freq, duration);
    //}
	//cout<<'\a';
	//Beep(1000,1000);
	return 0;
}