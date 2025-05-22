#include<iostream>
using namespace std;
int main(){
	int A[2][2],B[2][2],sum[2][2],r,c;
	cout<<"matrix A value"<<endl;
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
	{
	cout<<"enter values of matrix A"<<endl;
	cin>>A[r][c];
}
}
cout<<"matrix B"<<endl;
for(r=0;r<2;r++)
{
	for(c=0;c<2;c++)
{
cout<<"enter values of matrix B"<<endl;
	cin>>B[r][c];
}
}
cout<<"....summation.....";
for(r=0;r<2;r++)
{
	for(c=0;c<2;c++)
	{
		sum[r][c]=A[r][c]+B[r][c];
	}
	}
	cout<<"display"<<endl;
for(r=0;r<2;r++)
{
	for(c=0;c<2;c++)
{
	cout<<sum[r][c]<<"\t";
}
cout<<"\n";
}
	return 0;
}