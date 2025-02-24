#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    fast;
    ll n,m;
    cin>>n>>m;
    int k[n][m];
    ll a[n],b[m];
    char c;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>c;
            if(c=='1') {
                k[i][j]=1;
            }
            else {
                k[i][j]=0;
            }
        }
    }
    ll s;
    for(int i=0; i<n; i++) {
        s=0;                                                 // 1 0 0
        for(int j=0; j<m; j++) {                             // 0 0 1
            s+=k[i][j];                                      // 0 1 0
        }
        a[i]=s;
    }
    for(int j=0; j<m; j++) {
        s=0;
        for(int i=0; i<n; i++) {
            s+=k[i][j];
        }
        b[j]=s;
    }
    ll say=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(k[i][j]==1) {
                if(a[i]==m and b[j]==n) {
                    say++;
                }
                else if(a[i]==1 and b[j]==1) {               // 1 0 0
                    say++;                                   // 0 0 1
                }                                            // 0 1 0
            }
            else {
                if(a[i]==0 and b[j]==0) {
                    say++;
                }
                else if(a[i]==m-1 and b[j]==n-1) {
                    say++;
                }
            }
        }
    }
    cout<<say<<endl;
    return 0;
}