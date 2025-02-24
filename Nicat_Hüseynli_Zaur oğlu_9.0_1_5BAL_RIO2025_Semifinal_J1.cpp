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
     ll h , m , d ;
	 char c;
	 cin >> h >> c >> m >> d;
	 ll hour , min;
	 hour =  d / 60;
	 min = d % 60;
	 h += hour;
	 m += min;
	 if(m >= 60){
	 	ll qaliq = (m/60);
	 	m -= 60;
	 	h += qaliq;
	 }  
	 if(h >= 24){
	 	h -= 24;
	 }
	 if(h < 9 and m >9){
	 	cout << "0" << h << ":" << m << endl;
	 }
	 else if(m < 9 and h >9){
	 	cout << h << ":" << "0" << m << endl;
	 }
	 else if(h <9 and m < 9){
	 	cout << 0 << h << ":" << 0 << m << endl;
	 }
	 else{
	 	cout << h << ":" << m << endl;
	 }
    }
}

