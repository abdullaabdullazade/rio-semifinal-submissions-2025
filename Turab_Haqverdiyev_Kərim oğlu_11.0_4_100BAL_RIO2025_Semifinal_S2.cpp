#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio();cout.tie(0);cin.tie(0);

    int t;
    cin>>t;

    for(int _=0;_<t;_++){
        int n;
        cin>>n;
        int l[n],r[n];
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            l[i]=r[i]=x;
        }
        sort(r,r+n);

        int say=1;
        int indl=0;
        int indr=lower_bound(r,r+n,l[0])-r;
        int negative=0;
        for(int i=1;i<n;i++){
            int z=lower_bound(r,r+n,l[i])-r;
            if(negative==0){
                if(z>indr) negative=1;
                else negative=-1;
            }
            if(i-indl==negative*(z-indr)) continue;
            indl=i;
            indr=z;
            say+=1;
            negative=0;
        }
        cout<<say<<endl;
    }
}
