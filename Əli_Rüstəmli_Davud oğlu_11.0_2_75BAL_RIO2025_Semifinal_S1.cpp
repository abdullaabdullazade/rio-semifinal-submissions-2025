#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector <int> v;
	int n, m;

	cin >> n >> m;
	int a, b;
	
	for(int i=n; i < m+1; i++)
	{
		a = i;
		b = i;
		if(a != 0)
		{
			while(a > 0)
			{
				v.push_back(a%10);
	    		a /= 10;
			}
		}
		else
		{
			a = 0;
			v.push_back(a);
		}
		
		
		reverse(v.begin(), v.end());
		//for(int r=0; r < v.size(); r++)
		//cout << v[r];
		int c = 0;
		for(int j=0; j < v.size(); j++)
		{
	   		c += v[j] * pow(10, j);
	   		//cout << c << endl;
		}
		if(b == c)
		cout << "Palindrome!" << endl;
		else
		cout << b << endl;
		v.clear();
	}

	return 0;
}

