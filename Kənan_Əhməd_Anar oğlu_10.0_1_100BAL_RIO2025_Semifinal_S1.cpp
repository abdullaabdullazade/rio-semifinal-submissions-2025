#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sortv sort(v.begin(),v.end())
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,o;
        cin>>n;
        int a[n+1];
        int ans=0;
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
        }
        a[n]=0;
        for(int i=0 ;i<n;i++){
            o=0;
            int c=0;
            if(a[i]>a[i+1]){
                o++;
                c++;
                while(a[i]>a[i+1] and a[i+1]!=0){
                    i++;
                }
                ans+=c;
                c=0;
            }
            else if(a[i]<a[i+1]){
                o++;
                c++;
                while(a[i]<a[i+1] and a[i+1]!=0){
                    i++;
                }
                ans+=c;
                c=0;
            }
        }
         cout<<ans<<endl;

    }
}
