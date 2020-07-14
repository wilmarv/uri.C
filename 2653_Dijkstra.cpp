#include<bits/stdc++.h> 
using namespace std;
int main()
{
	string x;
	long long int cont=0;
	vector<string>bi;
	while(cin>>x)
	{
		bool com=true;
		bi.push_back(x);
		    for(int i=0;i<(bi.size()-1);i++)
			{
				
				if(bi[i]==x)
				{
					com=false;
					break;
				}
			}
			if(com)
				cont++;		
	}
	cout<<cont<<endl;
	return 0;
}