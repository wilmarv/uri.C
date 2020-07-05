#include<iostream> 
#include<cmath> 
#include<iomanip>
using namespace std;

int main()
{
	double r,v;
	cin>>r;
	v=4.0/3.0*3.14159*pow(r,3);
	cout<<fixed<<setprecision(3);
	cout<<"VOLUME = "<<v<<endl;
	
	return 0;
}