#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	bool pr = true, su = true;

	while(cin >> x)
	{

		for(int i = 2; i < x; i++)
		{
			if(x % i == 0) {
				pr = false;
				break;
			}
		}
		if(!pr||x==1||x==0)
			cout << "Nada" << endl;
		else
		{
			
			while(x != 0)
			{
				int xx = x % 10;
				if(xx == 1 || xx==0) {
					su = false;
					break;
				}
				for(int i = 2; i < xx; i++)
				{
					if((xx == 0 || xx == 1 || xx % i == 0)) { 
						su = false;
						break;
					}
				}
				x /= 10;
			}
			if(su)
				cout << "Super" << endl;
			else
			{
				cout << "Primo" << endl;
			}
		}
		pr = true;
		su = true;

	}

	return 0;
}
