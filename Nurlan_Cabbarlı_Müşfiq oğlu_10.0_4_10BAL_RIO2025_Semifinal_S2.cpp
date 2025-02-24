#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define pb push_back
#define pll pair<long long, long long>
#define vll vector<long long>
#define in insert
const ll MOD = 1e9+7;
bool check(ll n){
    string s=to_string(n);
    for(ll i=0;i<s.size()/2+s.size()%2;i++){
        if(s[i]!=s[s.size()-i-1]) return false;
    }
    return true;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1],b[n+1];
        ll minn=1e9+1;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        a[0]=0;
        sort(b+1,b+n+1);
        minn=b[1];
        //auto it = lower_bound(a+1,a+n+1, minn)-a;
        int cnt=0;
        int i=2;
        bool fl=true;
        /*for(i=2;i<=n && fl;i++){
            if(a[it-1]==b[i]){
                int c=1;
                while(a[it-c]==b[i]){
                    i++;
                    c++;
                }
                if(i==n) fl=false;
            }
            else if(a[it+1]==b[i] && fl){
                int c=1;
                while(a[it+c]==b[i]){
                    c++;
                    i++;
                }
                if(i==n) fl=false;
            }
            cnt++;
            it = lower_bound(a+1,a+n+1, b[i])-a;
        }*/
        vll v,v2(n);
        bool s1=true,s2=true;
        for(int i=1;i<=n;i++){
                if(a[i]!=b[n-i+1]) s1=false;
                if(a[i]!=b[i]) s2=false;
            auto it = lower_bound(a+1,a+n+1, b[i])-a-1;
            v.pb(it);
            v2[n-i]=it;
        }
        if(s1){
            cout<<1<<endl;
            continue;
        }
        else if(s2){
            cout<<1<<endl;
            continue;
        }
        else cout<<2<<endl;
        /*set<long long>s;
        for(int i=0;i<n;i++){
            if(v[i+1]-v[i]==1){
                while(v[i+1]-v[i]==1){
                    i++;
                    s.insert(v[i]);
                    s.insert(v[i+1]);
                }
                cnt++;
            }
            else continue;

        }
        for(int i=0;i<n;i++){
            if(v2[i+1]-v2[i]==1){
                while(v2[i+1]-v2[i]==1){
                    i++;
                    s.insert(v2[i]);
                    s.insert(v2[i+1]);
                }
                cnt++;
            }
        }
        cout<<s.size()<<endl;
        if(cnt==0) cnt++;
        cout<<cnt<<endl;*/
    }
}
