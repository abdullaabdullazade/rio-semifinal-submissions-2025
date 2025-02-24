#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define vii vector<vector<int>>
#define pii pair<int,int>
int main(){
    //freopen("B_input.txt","r",stdin);
    //freopen("B_output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        int res=1;
        bool check=false;
        for(int&i:a)cin>>i;
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        if(a[0]<a[1])check = true;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]&&check){
                res=2;
                break;
            }else if(a[i]<a[i+1]&&!check){
                res=2;
                break;
            }
        }
        cout<<res<<endl;
    }
}
