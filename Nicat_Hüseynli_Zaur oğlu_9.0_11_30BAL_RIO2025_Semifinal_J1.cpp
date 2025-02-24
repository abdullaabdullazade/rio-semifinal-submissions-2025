#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <vector>
#define ll long long
using namespace std;
int main(){
    long long q;
    string a;
    cin >> q;
    while(q--){
    	ll a , b , d;
    	char c;
    	cin >> a >> c >> b >> d;
    	ll hour , min;
    	hour = d/60;
    	min = d%60;
    	a += hour;
    	b += min;
    	if(b >= 60){
    		ll qaliq  = b / 60;
    		b -= 60;
    		a += qaliq;
		}
		if(a >= 24){
			a = a - (a/24)*24;
		}
		if(a <= 9 and b <= 9){
			cout << "0" << a << c << "0" << b<< endl;
		}
		else if(a <= 9 and b > 9){
			cout << "0" << a << c << b<< endl;
		}
		else if(a > 9 and b <= 9){
			cout << a << c << "0" << b<< endl;
		}
		else{
			cout << a << c << b << endl;
		}
	}
}
