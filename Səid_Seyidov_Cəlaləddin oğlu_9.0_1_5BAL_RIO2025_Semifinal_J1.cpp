#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve(){
    string a;
    int b;
    cin>>a>>b;
    string x,y;
    int c,d;
    if(a[0] == '0'){
        x = a[1];
    }else{
        x+= a[0];
        x += a[1];
    }
    if(a[3] == '0'){
        y = a[4];
    }else{
        y += a[3];
        y += a[4];
    }
    d = stoi(x);
    c = stoi(y);
    if(c + b >= 60){
        if(d < 24){
            d++;
        }
        if(d >= 24){
            d = 0;
        }
        c = c + b - 60;
    }else{
        d += b;
    }
    if(d < 10){
        x = "0" + to_string(d);
    }else{
        x = to_string(d);
    }
    if(c < 10){
        y = "0" + to_string(c);
    }else{
        y = to_string(c);
    }
    cout << x << ":" << y << endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
