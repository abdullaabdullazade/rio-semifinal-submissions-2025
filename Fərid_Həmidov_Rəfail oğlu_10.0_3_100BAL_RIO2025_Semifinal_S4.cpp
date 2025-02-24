#include<bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repi(i,a,b) for(int i=a;i<=b;i++)
#define vll vector<ll>
#define pb push_back
#define ff first
#define ss second
#define endl '\n'
#define all(vec) vec.begin(),vec.end()
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    ll n;
    cin>>n;
    map<int,bool>used;
    vll vec(n);
    vll sortedvec(n);
    //vector <pair<int,int> >neig(10000001);
    map<int,pair<int,int> > neig;
    rep(i,0,n){
        cin>>vec[i];
        sortedvec[i]=vec[i];
    }
    //cout<<123;
    sort(all(sortedvec));
    rep(i,0,n){
        if(i==0){
            neig[sortedvec[i]].ff=-1;
            neig[sortedvec[i]].ss=sortedvec[i+1];
        }
        if(i==n-1){
            neig[sortedvec[i]].ss=-1;
            neig[sortedvec[i]].ff=sortedvec[i-1];
        }
        else{
            neig[sortedvec[i]].ff=sortedvec[i-1];
            neig[sortedvec[i]].ss=sortedvec[i+1];
        }
    }
    
    ll ans=0;

    rep(i,0,n){
        if(i!=n-1){
            ll n1=neig[vec[i]].ff;
            ll n2=neig[vec[i]].ss;
            if(vec[i+1]==n1 and used[n1]==false and n1!=-1){
                used[vec[i]]=1;
            }
            if(vec[i+1]==n2 and used[n2]==false and n2!=-1){
                used[vec[i]]=1;
            }
            if(vec[i+1]!=n1 and vec[i+1]!=n2){
                //cout<<vec[i]<<" "<<n1<<" "<<n2<<endl;
                ans++;
            }

        }
    }
    cout<<ans+1<<endl;

    return;
}
int main(){
    IO;
    int t;
    cin>>t;
    //t=1;
    while(t--){
        solve();
    }
    return 0;
}
