#include <bits/stdc++.h>
#define ll long long
const ll MOD = 1e9+7;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll t,a,b,c,d,e,f,g;
    cin>>t;
    while(t--){
        cin>>b;
        vector<ll>v(b);
        vector<ll>v1(b);
        vector<ll>ans(b,b);
        for(int i =0;i<b;i++){
            cin>>v[i];
        }
        for(int i =0;i<b;i++){
            cin>>v1[i];
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        for(int i =0;i<b;i++){
            for(int j =0;j<b;j++){
                if(v[i]<v1[j]){
                    ans[i]--;
                }
            }
        }
        for(int i =0;i<b;i++){
            ans[i] = ans[i]-i;
        }
        ll d = 1;
        for(int i =0;i<b;i++){
            d = d*ans[i];
        }
        cout<<d%MOD<<endl;
    }
}
//By Rashid_Hashimzade
//Good_Luck

