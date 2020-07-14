#include<bits/stdc++.h> 
using namespace std;

int main()
{
	int x,y,m=0,v[1005];
	
	cin>>x>>y;
	for(int i=0;i<x;i++)
		cin>>v[i];
	for(int i=1;i<x;i++)
	{
		if(v[i-1]!=y)
		{
		   	if(v[i-1]<y)
			   {
			   	for(v[i-1];v[i-1]!=y;v[i-1]++)
				   {
				   	m++;
				   	v[i]++;
				   }
			   }
			   else
			   {
				   for(v[i-1];v[i-1]!=y;v[i-1]--)
				   {
				   	m++;
				   	v[i]--;
				   }
			   }
		}
	}
    cout<<m<<endl;
	return 0;
}