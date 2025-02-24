#include <bits/stdc++.h>

using namespace std;
char a[1501][1501];
long long n, m;
bool check(long long x, long long y){
    set<long long>s;
    for(long long i=x-1;i>=0;i--)s.insert(a[i][y]);
    for(long long i=x+1;i<n;i++)s.insert(a[i][y]);
    for(long long i=y-1;i>=0;i--)s.insert(a[x][i]);
    for(long long i=y+1;i<m;i++)s.insert(a[x][i]);

    if(s.size()==1||s.size()==0)return true;
    else return false;
}
int main(){
    long long cnt=0;
    cin>>n>>m;
    for(long long i=0;i<n;i++){
        for(long long j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(long long i=0;i<n;i++){
        for(long long j=0;j<m;j++){
            if(check(i, j)){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}
