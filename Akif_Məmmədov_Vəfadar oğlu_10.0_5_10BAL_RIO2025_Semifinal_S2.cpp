#include <bits/stdc++.h>
using namespace std;
//daha cox numune qoyun suallar anlasilmir bele islemek olmur axi
long long n,m,i,e,j,k,l,t;
int main(){
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>arr(n);
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        if(arr[0]>arr[n-1]){
            reverse(arr.begin(),arr.end());
        }
        l=1;
        for(i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                l++;
            }
        }
        if(l==1) cout<<1<<"\n";
        else cout<<2<<"\n";

    }
    return 0;
}
