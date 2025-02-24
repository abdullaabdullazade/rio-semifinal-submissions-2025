#include <bits/stdc++.h>
#define ll long long
const ll MOD = 1e9+7;
using namespace std;
int main(){
    ll t,a,b,c,d,e,f,g,kx;
    cin>>t;
    vector<ll>es;
    while(t--){
        cin>>b;
        vector<ll>v;
        vector<ll>v1;
        vector<ll>v2;
        vector<ll>ans;
        for(int i =0;i<b;i++){
            cin>>f;
            v.push_back(f);
            v2.push_back(f);
        }
        for(int i =0;i<b;i++){
            cin>>g;
            v1.push_back(g);
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        v1.push_back(v[v.size()-1]+1);
        ll say =0;
        kx=1;
        for(auto mt : v){
            auto it = lower_bound(v1.begin(),v1.end(),mt);
            if(*it>mt){
                kx = kx*((it-v1.begin())-say);
            }
            else{
                kx = kx*((it-v1.begin()+1)-say);
            }
            say++;
        }
        cout<<kx%MOD<<endl;
    }
}
//By Rashid_Hashimzade
//Good_Luck
