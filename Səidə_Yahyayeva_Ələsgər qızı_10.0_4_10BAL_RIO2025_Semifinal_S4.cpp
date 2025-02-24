#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
///Und der Haifisch der hat tranen
///Und der laufen vom Gesicht
///Doch der Haifisch lebt im wasser
///So die tranen siecht man nicht
using namespace std;
#define enter ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define str string
#define endl '\n'
#define all(v) v.begin(),v.end()
#define pb() push_back()
const ll sz = 1e5+5;



void qwerty(){
    enter;

    ll n,m;
    cin>>n>>m;
    vector<ll> v;
    ll a[m+5],b[m+5],c[m+5][m+5];
    for(ll i=  0; i<m; i++) cin>>a[i];
    for(ll i=  0; i<m; i++) cin>>b[i];

    for(ll i= 0; i<m; i++){
        for(ll j = 0; j<m; j++){
           // v.push_back(abs(a[i] -  b[j]));
            //v.push_back(abs(a[j] -  b[i]));
            //v[i][j].pb(abs(a[i] - b[j]));
            c[i][j] = abs(a[i]- b[j]);
        }

    }
    ll mini = INT_MAX;
    for(ll i= 0; i<m; i++){
        for(ll j = 0; j<m; j++){
               // cout<<c[i][j]<<' ';
            if(c[i][j] < mini)
                mini = c[i][j];
        }
//cout<<endl;
    }
    cout<<mini<<endl;



}


int main(){
    enter;

    ll T = 1;
    //cin>>T;
    while(T--){
        qwerty();
    }

}


