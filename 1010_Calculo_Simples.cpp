#include<iomanip> 
#include<cmath> 
#include<iostream> 
 using namespace std;
 int main(){	 
	 int x,y,x2,y2;
	 double z,z2,t;
	 cin>>x>>y>>z;
	 cin>>x2>>y2>>z2;
	 t= (y*z)+(y2*z2);
	 cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<t<<endl;
	 
	 return 0;
 }