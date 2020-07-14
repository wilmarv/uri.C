#include<bits/stdc++.h> 
using namespace std;
vector<int>g[65];
bool vis[65];

void FDS(int u,int &cont)
{
	int t=g[u].size();
	vis[u]=true;
	for(int i=0;i<t;i++)
	{
		int v=g[u][i];
		if(!vis[v])
		{
			FDS(v,cont);
			cont++;
		}
	}
	
}

int main()
{
	int n,nu,v,a,x,y,cont=0;
	cin>>n;
	while(n-->0)
	{
		cin>>nu;
		cin>>v>>a;
		for(int i=0;i<v;i++)
		{
			g[i].clear();
		}
		for(int i=0;i<v;i++)
		{
			vis[i]=false;
		}
		for(int i=0;i<a;i++)
		{
			cin>>x>>y;
			g[x].push_back(y);
			if(x!=y)
				g[y].push_back(x);
		}
		FDS(nu,cont);
		cout<<2*cont<<endl;
		cont=0;
	}
	
	
	return 0;
}