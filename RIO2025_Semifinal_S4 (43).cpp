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
    long long n,k; cin>>n>>k; vector<long long>v1(k),v2(k);
    for(int i = 0 ; i<k ; i++) cin>>v1[i];
    for(int i = 0 ; i<k ; i++) cin>>v2[i];
    sort(v1.begin(),v1.end()); sort(v2.begin(),v2.end());
    for(int i = 0 ; i<k ; i++){
        for(int j = 0 ; j<k ; j++){
            mini=min(mini,abs(v1[i]-v2[j]));
        }
    }
    cout<<mini;
}
int main(){
    int t = 1;
    //cin>>t;
    while(t--) solve();
}
