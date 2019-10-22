#include<iostream>// input/output library 
#include<math.h>// including maths library
using namespace std;
double area(double &a)
{
	double result;
	result=((3*sqrt(3))/3)*(a*a);
	return result;
}
double area(double &a,double &b)
{
	double result;
	result=a*b;
	return result;
}
double area(float &x)
{
	double result;
	result=3.1416*(x*x);
	return result;
}
int area(int &z)
{
	double result;
	result=(z*z*z);
	return result;
}
//MAIN RUNS HERE//
int main()
{
	double e,f,g;
	float x;
	int z;
	cout<<"To calculate Area of hexagon enter number"<<endl;
	cin>>e;
	cout<<"Area of hexagone= "<<area(e)<<endl;
	cout<<"To calculate Area of rectangle enter numbers"<<endl;
	cin>>f;
	cin>>g;
	cout<<"Area of rectangle= "<<area(f,g)<<endl;
	cout<<"To calculate Area of circule enter numbers"<<endl;
	cin>>x;
	cout<<"Area of circule= "<<area(x)<<endl;
	cout<<"To calculate Area of cube enter numbers"<<endl;
	cin>>z;	
	cout<<"Area of cube= "<<area(z)<<endl;
}
//it is now changing by shabbar
