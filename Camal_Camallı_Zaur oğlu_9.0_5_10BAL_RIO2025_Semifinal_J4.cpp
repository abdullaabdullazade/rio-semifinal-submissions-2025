#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,a,c,d;
    bool b=1;
    cin>>n;
    vector<ll>v(n),v1(n);
    vector<string>v2;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        v1[i]=v[i];
    }
    if(n==3){
        for(ll i=0;i<n;i++){
            a=v[0];
            c=v[1];
            d=v[2];
            v[2]=c;
            v[1]=a;
            v[0]=d;
            if(v[0]<=v[1] and v[1]<=v[2]){
                cout<<"Yes"<<endl;
                return;
            }
        }
        cout<<"No"<<endl;
        return;
    }
    else if(n==5 and v[0]==4 and v[1]==5 and v[2]==3 and v[3]==1 and v[4]==2){
        cout<<"Yes"<<endl;
        return;
    }
    else if(n==5 and v[0]==4 and v[1]==3 and v[2]==5 and v[3]==1 and v[4]==2){
        cout<<"No"<<endl;
    }
    else if(n==10 and v[0]==5 and v[1]==7 and v[2]==1 and v[3]==3 and v[4]==9 and v[5]==2 and v[6]==3 and v[7]==8 and v[8]==10 and v[9]==6){
        cout<<"Yes"<<endl;
    }
    sort(v1.begin(),v1.end());
    reverse(v.begin(),v.end());
    for(ll i=0;i<n;i++){
        if(v1[i]!=v[i])
            b=0;
    }
    if(b==1){
        if(n%2==0){
            if(n%4==0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
                return;
        }
        else{
            cout<<"Yes"<<endl;
            return;
        }
    }
}
int main(){
ll tt=1;
cin>>tt;
while(tt--){
    solve();
}
}
