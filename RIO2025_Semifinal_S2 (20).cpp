// Bismillahirrahmanirrahim
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
    vector<int> arr(n);
    map<int,int> var;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        var[arr[i]]++;
    }
    int c=0;
    for(auto& v:var){
        v.second = ++c;
    }
    for(auto& v:arr){
        //cout<<v<<" "<<var[v]<<endl;
        v = var[v];
    }
    int res=0;
    vector<int> artir(n,0);
    vector<int> azalir(n,n-1);
    for(int i = 1;i<n;i++){
        if(arr[i]==arr[i-1]+1){
            artir[i]=artir[i-1];
        }
        else{
            artir[i]=i;
        }
    }
    for(int j = n-2;j>=0;j--){
        if(arr[j]==arr[j+1]+1){
            azalir[j]=azalir[j+1];
        }
        else{
            azalir[j]=j;
        }
    }
    for(int i =0;i<n;){
        int x = azalir[i];
        ++res;
        int l =i;
        int r = n-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(artir[mid]<=i){
                l = mid+1;
                x = max(x,mid);
            }
            else{
                r = mid-1;
            }
        }
        //cout<<i<<" "<<x<<endl;
        i=x+1;
    }
    putr(res);
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
