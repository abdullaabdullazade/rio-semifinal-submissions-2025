#include <bits/stdc++.h>

using namespace std;

int main(){
    long long s,d,g;
    char c;
    long long t;
    cin>>t;
    for(long long i=0;i<t;i++){
    cin>>s>>c>>d>>g;
    if(g+d>=60){
    s=s+(g+d)/60;
    d=(g+d)%60;
    }
    if(d==0){
    cout<<s<<":00"<<endl;
    }
    else{
    cout<<s<<":"<<d<<endl;
    }
    }
}
