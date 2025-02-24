#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int> v(n + 1, 0);
        for (int i = 0; i < n; i++){
            cin>>v[i];
        }
        vector<int> ans;
        for (int i = 0; i < n; i++){
            if (v[i] <= v[(i + 1) % n]){

                ans.push_back(i + 1);
            }
        }
        if (ans.size() == n) ans.pop_back();
        cout<<ans.size()<<"\n";
        for (auto el : ans){
            cout<<el<<" ";
        }
        cout<<"\n";
    }
}
