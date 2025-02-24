#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <vector>
#define ll long long
using namespace std;
int main(){
    long long q;
	string s = "00";
    cin >> q;
    while(q--){
        ll n , m , d ,m2;
        char c;
        cin >> n >> c >> m >> d;
        ll hour , min;
        hour = d / 60;
        min = d % 60;
        n += hour;
        m += min;
        m2 = m;
        if(m >= 60){
        	m = m - 60;
        	n += m2 / 60;
        	if(n == 24 and m < 9){
        		cout << "00" << ":0" << m << endl;
			}
        	else if(n == 24 and m > 9){
        		cout << "00" << ":" << m << endl;
			}
			else if(n <= 9){
				cout << "0" << n << ":" << m << endl;
			}
			else if(m <= 9){
				cout << n << ":0" << m << endl;
			}
			else if(n <= 9 and n<=9){
				cout << "0" << n << ":0" << m << endl;	
			}
			else{
				cout << n << ":" << m << endl;
			}
        	
		}
		if(m < 24 and n < 60 and m == 0){
		
			
		
			cout << n << ":" << s << endl; 
			
		}
    }
}

