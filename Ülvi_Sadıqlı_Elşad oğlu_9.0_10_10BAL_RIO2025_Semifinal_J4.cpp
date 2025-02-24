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
const int mod=1000000007;
using pii=pair<int,int>;
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[n],c[n];
    for(int i=0;i<n;i++){
        b[i]=a[i];
        c[i]=a[i];
    }
    sort(b,b+n);
    sort(c,c+n,greater<int>());
    bool flag=false;
    for(int i=0;i<n;i++){
        if(a[i]!=c[i]) flag=true;
    }
    if(n==3){
        if(a[0]<=a[1] and a[1]<=a[2]){
            cout<<"Yes"<<endl;
            return;
        }
        swap(a[0],a[2]);
        swap(a[1],a[2]);
        if(a[0]<=a[1] and a[1]<=a[2]){
            cout<<"Yes"<<endl;
            return;
        }else{
            swap(a[0],a[2]);
            swap(a[1],a[2]);
            if(a[0]<=a[1] and a[1]<=a[2]){
                cout<<"Yes"<<endl;
                return;
            }else{
                cout<<"No"<<endl;
                return;
            }
        }
    }
    if(!flag and n!=3){
        cout<<"Yes"<<endl;
        return;
    }
}
int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
//is the best BMW driver Ruslan teacher!?
//
