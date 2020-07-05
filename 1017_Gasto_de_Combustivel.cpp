#include<iostream> 
#include<iomanip> 
#include<cmath> 
using namespace std;
int main()
{
	int T,V;
	float K,L;
	cin>>T;
	cin>>V;
	K =(V*T);
	L = K/12;
	cout<<fixed<<setprecision (3)<<L<<endl;
	return 0; 
}