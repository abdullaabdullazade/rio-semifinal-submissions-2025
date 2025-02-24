#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define f first
#define s second
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, k, ans=-1;
    cin>>n>>k;
    vector<vector<ll>> v(n, vector<ll>(k));
    for (int i=0; i<n; i++){
        for (int j=0; j<k; j++){
            cin>>v[i][j];
        }
    }
    for (int i=0; i<n; i++){
        sort(v[i].begin(), v[i].end());
    }
    set<ll> st;
    for (int i=0; i<k; i++){
        st.clear();
        ll last=v[0][i];
        st.insert(last);
        for (int j=1; j<n; j++){
            auto it1=st.end();
            it1--;
            last=*it1;
            auto it=upper_bound(v[j].begin(), v[j].end(), last);
            ll ind, mini;
            if (it==v[j].end()){
                ind=k-1;
            }
            else{
                ind=it-v[j].begin();
            }
            if (ind==0){
                mini=v[j][ind];
            }
            else{
                if (abs(last-v[j][ind])<abs(last-v[j][ind-1])){
                    mini=v[j][ind];
                }
                else{
                    mini=v[j][ind-1];
                }
            }
            st.insert(mini);
        }
        ll first=*st.begin();
        auto it1=st.end();
        it1--;
        last=*it1;
        if (i==0){
            ans=last-first;
        }
        else{
            ans=min(ans, last-first);
        }
    }
    cout<<ans;

    return 0;
}