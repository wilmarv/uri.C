#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int x,m;
	char na[30];
	string li,no;
	map<string,string>mp;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		cin>>li;
		cin.ignore();
		cin.getline(na,30);
		no=na;
		mp[li]=no;
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin.ignore();
		cin.getline(na,30);
		cin>>li;
		cout<<na<<endl;
		cout<<mp[li]<<endl;
		cout<<endl;	
	}
	
	return 0;
}