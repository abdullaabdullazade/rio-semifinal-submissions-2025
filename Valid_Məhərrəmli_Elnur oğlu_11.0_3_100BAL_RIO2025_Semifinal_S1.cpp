#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
    ll a,b;
    cin>>a>>b;
    for(ll i=a;i<=b;i++){
        vector<int> v1;
        vector<int> v2;
        ll c=0;
        string s=to_string(i);
        for(ll i=0;i<s.size();i++){
            v1.push_back(s[i]);
        }
        for(ll i=s.size()-1;i>=0;i--){
            v2.push_back(s[i]);
        }
        for(ll i=0;i<v1.size();i++){
            if(v1[i]==v2[i]) c++;
        }
        if(c==s.size())cout<<"Palindrome!"<<endl;
        else cout<<i<<endl;
    }

    return 0;
}

