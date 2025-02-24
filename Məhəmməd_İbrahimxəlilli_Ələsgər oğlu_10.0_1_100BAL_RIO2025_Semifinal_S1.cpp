#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
int n,m;
cin>>n>>m;
for(int i=n;i<=m;i++){
    string s=to_string(i);
    string sc=s;
    reverse(s.begin(),s.end());
    string ss=s;
    if(sc==ss){
        cout<<"Palindrome!"<<endl;
    }
    else{
        cout<<i<<endl;
    }
}

}
