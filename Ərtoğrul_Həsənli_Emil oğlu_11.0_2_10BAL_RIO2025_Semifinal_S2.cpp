#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t,n,p,tm;
    bool l,h;
    cin>>t;
    for(int i=0;i<t;i++){
        l=true,h=true;
        cin>>n;
        for(int j=0;j<n;j++){
            if(!j){
                cin>>p;
                continue;
            }
            cin>>tm;
            if(p>tm){
                l=false;
            }
            else{
                h=false;
            }
            p=tm;
        }
        if(h||l){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }


}
