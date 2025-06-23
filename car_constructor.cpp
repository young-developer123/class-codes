#include<iostream>
#include<string>
using namespace std;

class car
{
	private:
		string brand,model;
		float price;
		int mileage;
	
	public:	
		car(string b,string m,float p,int mil)
		{
			brand = b;
			model = m;
			price = p;
			mileage = mil;
		}
	
	public:
		void display()
		{
			cout<<"brand: "<<brand<<endl;
			cout<<"Model: "<<model<<endl;
			cout<<"price: "<<price<<endl;
			cout<<"Mileage: "<<mileage<<" miles"<<endl;
		}
		
		void drive(int distance)
		{
			mileage += distance;
		}
};

int main()
{
	car car1( "Toyota","Corolla",20000, 5000);
	
	car1.drive(150);
	car1.display();
	
	
	return 0;
}