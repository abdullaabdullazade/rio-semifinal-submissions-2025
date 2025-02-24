// Bismillahirrahmanirrahim
// sallamasyon idea
// ))
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define all(x) x.begin(),x.end()
#define pb push_back
#define ins insert
#define pii pair<int,int>
#define putr(x) cout<<x<<endl;return;

const int inf = LLONG_MAX,sze = 2e5+23, mod= 1e9+7, prime = 1453;

void fast(){
    int n;
    cin>>n;
    vector<int> arr;
    vector<int> brr;
    for(int i=0,x;i<n;i++){
        cin>>x;
        arr.pb(x);
    }
    int sum=0;
    for(int i = 0;i<n;i++){
        brr.pb(abs(arr[(i+1)%n] - arr[i]));
        sum+=brr.back();
    }
        int x = sum/2;
    if(n<=20){
        for(int i = 1;i<(1<<n);i++){
            int s=0;
            vector<int> lst;
            for(int j=0;j<n;j++){
                if(i & (1<<j)){
                    s+=brr[j];
                    lst.pb(j+1);
                }
            }

            if(lst.size()!=n && s==x){
                cout<<lst.size()<<endl;
                for(auto v:lst){
                    cout<<v<<" ";
                }
                cout<<endl;
                return;
            }
        }
    }

    else{
        int s =0;
        vector<vector<int>> par(5);
    }
    cout<<-1<<endl;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt = 1;
    cin>>tt;
    while(tt--){
        fast();
    }

    return 0;
}
