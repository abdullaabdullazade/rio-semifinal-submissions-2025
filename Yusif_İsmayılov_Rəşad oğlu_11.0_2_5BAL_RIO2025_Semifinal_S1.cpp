#include<bits/stdc++.h>
using namespace std;
#define int long long



//owner:'joseph'
const int sz = 2e5+5;
const int mod = 1e9+7;


bool ok(int a)
{
	vector<int> s;
	while(a)
	{
		s.push_back(a%10);
		a/=10;
	}
	int l=0, r = s.size() - 1;
	while(l < r){
		return 0;
	}
	l++;
	r--;
}

signed main(){
ios_base::
sync_with_stdio(0);
cin .tie(0);
cout.tie(0);

	int l, r;
    cin >> l >> r;

	for(int i = l; i <= r; i++)
	{
		if(ok(i))
		{
			cout << "Palindrome!" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
}


