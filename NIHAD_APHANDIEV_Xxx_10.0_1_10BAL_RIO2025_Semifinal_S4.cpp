#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <queue>
using namespace std;
#define ll long long
#define pairll pair<ll, ll>
#define mk make_pair 
#define else if elif 
#define hurry_up ios_base::sync_with_stdio(0); \
    cout.tie(0); \
    cin.tie(0); \

ll a[1001], b[1001];
int main(){
    ll n, k, x, ans=INT_MAX;
    cin>>n>>k;
    for (ll i=0;i<k;i++){
    	cin>>a[i];
	}
	for (ll i=0;i<k;i++){
		cin>>b[i];
	}
	for (ll i=0;i<k;i++){
		for (ll j=0;j<k;j++){
			ans=min(ans, abs(a[i]-b[j]));
		}
	}
	cout<<ans;
}
