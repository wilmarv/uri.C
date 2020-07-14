#include<bits/stdc++.h> 
using namespace std;

int main()
{
	int x,q,d,com;
	double pr,soma;
	string no;
	map<string,double> p;
	map<string,double> :: iterator  it;
	cin>>x;
	while(x>0)
	{
		cin>>q;
		for(int i=0;i<q;i++)
		{
			cin>>no;
			cin>>pr;
			p[no]=pr;
		}
		cin>>d;
		for(int i=0;i<d;i++)
		{
			cin>>no;
			cin>>com;
			soma+=(p[no]*com);
		}
		cout<<"R$ "<<fixed<<setprecision(2)<<soma<<endl;
		soma=0;
		x--;
	}
	return 0;
}