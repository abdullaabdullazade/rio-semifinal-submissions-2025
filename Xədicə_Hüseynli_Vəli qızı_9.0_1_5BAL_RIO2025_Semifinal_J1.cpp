#include <bits/stdc++.h>

using namespace std;

int main(){
    int s,d,g;
    char c;
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
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
