#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[k],b[k];
    for(int j=0;j<k;j++){
        cin>>a[j];
    }
    for(int j=0;j<k;j++){
        cin>>b[j];
    }
    sort(a,a+k);
    sort(b,b+k);
    int ia=k-1,ib=k-1;
    int f=abs(a[ia]-b[ib]);
    while(ia>=0 and ib>=0){
        if(abs(a[ia]-b[ib])<f){
            f=abs(a[ia]-b[ib]);
        }
        if(a[ia]>b[ib]){
            ia--;
        }else if(a[ia]<b[ib]){
            ib--;
        }else{
            break;
        }
    }
    cout<<f;
    return 0;
}
