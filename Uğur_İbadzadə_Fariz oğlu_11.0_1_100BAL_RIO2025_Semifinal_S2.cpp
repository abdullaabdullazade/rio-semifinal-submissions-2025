#include<bits/stdc++.h>

using namespace std;

int binarysearch(int n,int a[],int t){
    int l=0,mid=n/2,r=n;
    while(l<=r){
        mid=(l+r)/2;
        if(a[mid]>t){
            r=mid-1;
        }else if(a[mid]<t){
            l=mid+1;
        }else{
            return mid;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,ans=0;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        bool c=false;
        int ind=0;
        for(int i=0;i<n;i++){
            if(c==false){
                ind=binarysearch(n,b,a[i]);
                ans++;
                c=true;
            }else if(c){
                if(ind>0 and a[i]==b[ind-1]){
                        ind--;
                }else if(ind<n-1 and a[i]==b[ind+1]){
                        ind++;
                }else{
                    c=false;
                    i--;
                }
            }
        }
        cout<<ans<<"\n";
    }



    return 0;
}
