#include <bits/stdc++.h>
#define multiset ms
#define priority_queue pq
#define binary_search bs
#define upper_bound up
#define lower_bound lb
#define sorta sort(a,a+n)
#define sorts sort(s.begin(),s.end())
#define sortv sort(v.begin(),v.end())
#define reversea reverse(a,a+n)
#define reverses reverse(s.begin(),s.end())
#define reversev reverse(v.begin(),v.end())
using namespace std;
long long maxi=LONG_MIN,mini=LONG_MAX;
long long z[10001];
bool isprime(long long n){
    for(int i = 2 ; i<=sqrt(n) ; i++){
        if(n%i==0){
            return false;
            break;
        }
    }
    return true;
}
void solve(){
    long long a,b; string s; cin>>a>>b; bool x;
    for(int i = a ; i<=b ; i++){
        s=to_string(i); x=1;
        if(s[0]!=s[s.size()-1]) cout<<i;
        else{
            long long n=0,m=s.size()-1;
            while(n<=m){
                if(s[n]!=s[m]){
                    x=0; break;
                }
                n++,m--;
            }
            if(x) cout<<"Palindrome!";
            else cout<<i;
        }
        cout<<endl;
    }
}
int main(){
    int t = 1;
    //cin>>t;
    while(t--) solve();
}
