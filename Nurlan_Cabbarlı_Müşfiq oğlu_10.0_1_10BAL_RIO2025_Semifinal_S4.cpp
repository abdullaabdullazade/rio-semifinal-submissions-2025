#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
int main(){
    int q;
    cin>>q;
    while(q--){
    ll n;
    cin>>n;
    vll v(n);
    for(int i=0;i<v.size();i++) cin>>v[i];
    vll t;
    for(ll i=0;i<n;i++){
        if(v[i] < v[(i+1)%n]){
            t.pb(i+1);
        }
    }
    if(t.size() == 0){
        cout<<"1\n1\n";
    }
    else{
        cout<<t.size()<<'\n';
        for(int i:t){
            cout<<i<<" "<<endl;
        }
    } 
    }
}