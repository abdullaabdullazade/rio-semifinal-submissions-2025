#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define vii vector<vector<int>>
#define pii pair<int,int>
int main(){
    //freopen("D_input.txt","r",stdin);
    //freopen("D_output.txt","w",stdout);
    int n,m;
    cin>>n>>m;
    vector<priority_queue<int>>a(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            a[i].push(x);
        }
    }
    int res=abs(a[0].top()-a[1].top());
    while(!a[0].empty() && !a[1].empty()){
        res=min(res,abs(a[0].top()-a[1].top()));
        if(a[0].top()>a[1].top()){
            a[0].pop();
        }else{
            a[1].pop();
        }
    }
    cout<<res;
}
