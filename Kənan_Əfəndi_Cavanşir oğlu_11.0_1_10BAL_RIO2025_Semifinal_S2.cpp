#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int say=n;
        int a[n],b[n];
        map<long long,long long>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        for(int i=0;i<n-1;i++){
            mp[b[i]]=b[i+1];
        }
        for(int i=0;i<n-1;i++){
            if(a[i+1]==mp[a[i]]){
                say--;
            }
            /*int ic=i;
            while(a[ic-1]==mp[a[ic]] && ic>0){
                say--;
                ic--;
                cout<<i<<endl;
            }
            while(a[i+1]==mp[a[i]] && i<n-1){
                i++;
                say--;
                cout<<i<<endl;
            }*/

        }
        for(int i=n-1;i>0;i--){
            if(a[i-1]==mp[a[i]]){
                say--;
            }
        }
        cout<<say<<endl;
    }
    return 0;
}
