#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<deque>
#include<queue>
#include<map>
#include<cmath>
using namespace std;
using ll = int64_t;
using bollin = char;
using str = string;
using dbl = double;
int main()
{
	ll a;
	char s;
	ll hour , minute , time;
	cin>>a;
	for(long long i=0;i<a;i++)
	{
		cin>>hour>>s>>minute;
		cin>>time;
		if(time + minute<60)
		{
			hour+=0;
			minute = time + minute;
			
		}
		else if(time + minute>=60)
		{
			hour = hour + ((minute +  time) /60);
			minute = ((minute + time)%60);
      	}
         hour = hour%24;
      	if( hour<10)
      	{
      		cout<<0;
		}
		cout<<hour<<s;
		if(minute==0 or minute<10)
		{
			cout<<0;
		}
		cout<<minute<<endl;
	}
}