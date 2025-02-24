#include<bits/stdc++.h>
#define int long long
//#define all(v) v.begin(), v.end()
//#define pv  push_back
using namespace std;
int n,m;
signed main()
{
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    string s1,s2;
    cin>>s1>>s2;
    n=stoi(s1);
    m=stoi(s2);
    //cout<<n<<m;
    //bool ok[m-n+2];
    for(int i=n;i<=m;i++){
        string s=to_string(i);
        bool ok=true;
        for(int j=0;j<s.size()/2;j++){
            if(s[j]!=s[s.size()-1-j]) ok=false;
        }
        if(ok) cout<<"Palindrome!"<<'\n';
        else cout<<i<<'\n';
    }
}
