#include<bits/stdc++.h>
using namespace std;
vector<int>g[100];
bool vis[100];
int te[100];
void limpar(int n)
{
	for(int i=0;i<n;i++)
	{
		g[i].clear();
		vis[i]=false;
		te[i]=0;
	}
	
}
void grafo(int E)
{
	int x,y;
	for(int i=0;i<E;i++)
	{
		cin>>x>>y;
		g[x].push_back(y);
		te[x]=1;
	}
	
}
void FDS(int u,int &es)
{
	int t=g[u].size();
	sort(g[u].begin(),g[u].end());
	vis[u]=true;
	te[u]=0;
	for(int i=0;i<t;i++)
	{
		int v=g[u][i];
		if(!vis[v])
		{
			for(int j=0;j<es;j++)
				cout<<"  ";
			cout<<u<<"-"<<v<<" pathR(G,"<<v<<")"<<endl;
			es++;
			FDS(v,es);
			es--;
		}
		else
		{
			for(int j=0;j<es;j++)
				cout<<"  ";
			cout<<u<<"-"<<v<<endl;
		}
	}
}
int main()
{
	int N,E,V,n,es=1;
	cin>>N;
	n=1;
	while(N-->0)
	{
	  cin>>V>>E;
	  limpar(V);
	  grafo(E);
	  cout<<"Caso "<<n++<<":"<<endl;
	  for(int i=0;i<V;i++)
	  {
	  	if(te[i]==1)
		  {
	  		FDS(i,es);
	  		cout<<endl;
           }
	  }
	  limpar(V);
	  es=1;		
	}
	
	return 0;
}