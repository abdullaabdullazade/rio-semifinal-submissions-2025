#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
typedef char ch;
#define MAX INT_MAX
#define MIN INT_MIN
#define MOD 1e9+7
#define sorts sort(s.begin(),s.end())
#define sortv sort(v.begin(),v.end())
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define fori for(int i=0;i<n;i++)
#define forj for(int j=0;j<n;j++)
#define LMAX LLONG_MAX
#define LMIN LLONG_MIN
#define endd '\n'
bool isPrime(ll n){
    for(int i=0;i<=sqrt(n);i++){
            if(n%i==0)
                return false;
    }
    return true;

}
ll facto(ll n){
    ll ans=1;
    for(int i=2;i<=n;i++){
        ans*=i;
    }
    return ans;
}
void Print (vector<ll>v){
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<' ' ;

}
bool isPalindrome(string s){
    string r=s;
    reverse (r.begin(),r.end());
    if(r==s)
        return true;
    else
        return false;



}
bool isSortedVector(vector<ll>v){
if(is_sorted(v.begin(),v.end()))
    return true;

else
    return false;

}
bool isSortedString(string s){
if(is_sorted(s.begin(),s.end()))
    return true;
else
    return false;

}
ll ASCII(char c){
    return int(c);
}

int main(){

ll t,ss,dd,q;
char c;
cin>>t;
while(t--){
    cin>>ss>>c>>dd>>q;
    dd+=q;
    ss+=dd/60;
    if(dd>=60){
        dd=dd%60;

    }

    if(ss>=24){
        ss=ss%24;
    }
    if(ss<=9)
        cout<<"0"<<ss;
    else
        cout<<ss;
    cout<<":";
    if(dd<10)
        cout<<0<<dd<<'\n';
    else
        cout<<dd<<"\n";

}













}

