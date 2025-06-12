/*
	     NAME: ELIJAH MUSEMBI
		 REG NO: BSE-05-0111/2024
		 DESCRIPTION: PROGRAM TO CALCULATE VOLUME AND SURFACE AREA OF A CYLINDER
*/
#include<iostream>
using namespace std;

	

class Cylinder
{
	public:
	float radius,height;
	const float pi= 3.142;
	
	   float volume()
	    {
	      	  return pi* radius * radius * height;
	    }
	   
	    float surface_area()
	        {
	         	return ( 2*pi* radius * radius) + (2*pi*radius * height);
		    }
	   
};

int main()
{
	
	Cylinder c1;
	
		cout<<"enter height: ";
		cin>>c1.height;
		       
		cout<<"enter radius: ";
		cin>>c1.radius;
		        
		cout<<"VOLUME IS: "<<	c1.volume()<<endl;
		cout<<"\nSURFACE_AREA IS: "<<	c1.surface_area();
	
	return 0;
}