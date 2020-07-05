#include<iomanip> 
#include<cmath> 
#include<iostream> 
 using namespace std;
 int main(){	 
	 int x,y,z;
	 cin>>x>>y>>z;
	 if (x>y & x>z){
		 cout<<x<<" eh o maior"<<endl;
	 }
	 if (y>x & y>z){
		 cout<<y<<" eh o maior"<<endl;
	 }
	 if (z>x & z>y){
		 cout<<z<<" eh o maior"<<endl;
	 }
	 
	 return 0;
 }