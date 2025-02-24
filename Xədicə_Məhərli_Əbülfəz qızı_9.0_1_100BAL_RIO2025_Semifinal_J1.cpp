#include <bits/stdc++.h>
using namespace std;
#define Study ios_base::sync_with_stdio(); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define fori(x,y,z) for(ll x=y;x<=z;x++)
#define all(x) x.begin(),x.end()
#define pb push_back
#define ins insert
#define ull unsigned long long
/*
You got this :D
Anyways think of it as DIV3 A-D
A-B->30 DEQ
C-D->1 saat fikirlesme
1 saat 30 deq yazma
canin sag olsun codeforce contestidir isunfks
*/
void solve(){
    ll hr,mn,d;char c;
    cin>>hr>>c>>mn>>d;
    d%=24*60;
    ll total=hr*60+mn;
    total+=d;
    total%=24*60;
    hr=total/60;
    mn=total%60;
    string hrs=to_string(hr);
    if(hrs.size()==1)
        hrs="0"+hrs;
    string mns=to_string(mn);
    if(mns.size()==1)
        mns="0"+mns;
    cout<<hrs<<":"<<mns<<endl;
}
int main()
{
    Study;
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
