#include<bits/stdc++.h> 
using namespace std;

int main()
{
	list<int>mor;
	list<int>::iterator it;
	int n,s,x;
	while(cin>>n>>x)
	{
	  for(int i=1;i<=n;i++)
	  {
	  	mor.push_back(i);
	  }
	  for(int i=0;i<x;i++)
	  {
	  	cin>>s;
	  for(it=mor.begin();it!=mor.end();it++)
	  {
	  	if(s==*it)
	  		it=mor.erase(it);
	  }
	  }
	  if(n==x)
	  {
	  	cout<<"*"<<endl;
	  }
	  else
	  {
		  for(it=mor.begin();it!=mor.end();it++)
	  {
	  	cout<<*it<< " ";
	  }
	  cout<<endl;
	  }
	  mor.clear();
	}
    

    
	return 0;
}