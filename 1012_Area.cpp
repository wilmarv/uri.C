#include<iomanip> 
#include<cmath> 
#include<iostream> 
 using namespace std;
 int main(){	 
	 double x,y,z,t,c,T,q,r;
	 cin>>x>>y>>z;
	 t=(x*z)/2;
	 c=3.14159*pow(z,2);
	 T=(x+y)*z/2;
	 q=pow(y,2);
	 r=x*y;
	 cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<t<<endl;
	 cout<<"CIRCULO: "<<fixed<<setprecision(3)<<c<<endl;
	 cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<T<<endl;
	 cout<<"QUADRADO: "<<fixed<<setprecision(3)<<q<<endl;
	 cout<<"RETANGULO: "<<fixed<<setprecision(3)<<r<<endl;
	 return 0;
 }