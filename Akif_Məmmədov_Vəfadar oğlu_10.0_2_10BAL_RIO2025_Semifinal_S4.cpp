#include <bits/stdc++.h>
using namespace std;
//daha cox numune qoyun suallar anlasilmir bele islemek olmur axi
int n,m,i,e,j,k,l,t;
int main(){
    cin>>n;
    cin>>m;
    vector<int>arr(m);
    vector<int>ar(m);
    for(i=0;i<m;i++){
        cin>>arr[i];
    }
    for(i=0;i<m;i++){
        cin>>ar[i];
    }
    l=1000000001;
    for(i=0;i<m;i++){
        for(e=0;e<m;e++){
            l=min(l,abs(arr[i]-ar[e]));
        }
    }
    cout<<l;
}
