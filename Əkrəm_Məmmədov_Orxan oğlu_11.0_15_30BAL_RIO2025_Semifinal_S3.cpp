#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define vii vector<vector<int>>
#define pii pair<int,int>
bool solved=false;
void solve(vector<int>&b,vector<bool>visited,int x,int sum,int& goal,vector<int>res){
    res.push_back(x);
    visited[x]=1;
    if(sum==goal){
        cout<<res.size()<<endl;
        for(int i:res)cout<<i+1<<" ";
        cout<<endl;
        solved=true;
        return;
    }
    for(int i=0;i<b.size();i++){
        if(visited[i])continue;
        if(sum+b[i]<=goal){
            solve(b,visited,i,sum+b[i],goal,res);
        }
        if(solved)return;
    }
}
int main(){

    //freopen("C_input.txt","r",stdin);
    //freopen("C_output.txt","w",stdout);
    int t;

    cin>>t;
    while(t--){
        int n;
        solved=0;
        cin>>n;
        vector<int>a(n);
        for(int&i:a)cin>>i;
        a.push_back(a[0]);
        vector<int>b;
        int sum=0;
        for(int i=0;i<n;i++){
            b.push_back(abs(a[i]-a[i+1]));
            sum+=b[i];
        }
        if(sum%2){
            cout<<-1<<endl;
            continue;
        }
        sum/=2;
        vector<bool>visited(n,0);
        solve(b,visited,0,b[0],sum,{});
        if(!solved)cout<<-1<<endl;
    }
}
