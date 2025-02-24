#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
///Und der Haifisch der hat tranen
///Und die laufen vom Gesicht
///Doch der Haifisch lebt im wasser
///So die tranen siecht man nicht
using namespace std;
#define enter ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define str string
#define endl '\n'
#define all(v) v.begin(),v.end()

const ll sz = 1e5+5;


void qwerty(){
    enter;

    ll n,l,r;
    cin>>l>>r;

    for(ll i = l; i<=r; i++){
        str s = to_string(i);
        str t = s;
        reverse(all(s));
        if(s == t)
            cout<<"Palindrome!"<<endl;
        else
            cout<<i<<endl;
    }














}


int main(){
    enter;

    ll T = 1;
    //cin>>T;
    while(T--){
        qwerty();
    }

}
