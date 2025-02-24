#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define skip continue
#define priqueue priority_queue
const int INF=1000000000;
const int N=105;

using pii=pair<int,int>;
void bfs(int v){

}
void solve(){
    int a,b,d;
    char c;
    cin>>a>>c>>b>>d;
    int k=a*60+b+d;
    k%=1440;
    if(k/60<10) cout<<"0";
    cout<<k/60<<":";
    if(k%60<10) cout<<"0"<<k%60<<endl;
    else cout<<k%60<<endl;
}
int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
//best BMW driver Ruslan teacher!?
//
