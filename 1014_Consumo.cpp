#include<iostream> 
#include<cmath> 
#include<iomanip> 
using namespace std;
int main()
{
	int X;
	float Y,M;
	cin>>X;
	cin>> Y;
	M = X/Y;
	cout<<fixed<<setprecision(3)<< M<<" km/l"<<endl;
	return 0;
}