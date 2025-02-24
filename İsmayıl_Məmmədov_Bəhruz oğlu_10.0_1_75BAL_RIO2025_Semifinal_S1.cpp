///naber mudur
#include <bits/stdc++.h>
using namespace std;

int main(){
    string n,m,p1;
    string p;
    cin>>n>>m;
    long long n1=stoi(n),m1=stoi(m);
    for(int i=n1;i<m1+1;i++){
        p1="";
        string p=to_string(i);
        for(int l=0;l<p.size();l++){
            p1=p[l]+p1;
        }
        if(p==p1){
            cout<<"Palindrome!"<<endl;
        }else{
            cout<<p<<endl;
        }
    }



}
