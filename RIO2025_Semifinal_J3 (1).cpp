#include <bits/stdc++.h>

using namespace std;
char a[1501][1501];
int n, m;
bool check(int x, int y){
    set<int>s;
    for(int i=x-1;i>=0;i--)s.insert(a[i][y]);
    for(int i=x+1;i<n;i++)s.insert(a[i][y]);
    for(int i=y-1;i>=0;i--)s.insert(a[x][i]);
    for(int i=y+1;i<m;i++)s.insert(a[x][i]);

    if(s.size()==1)return true;
    else return false;
}
int main(){
    int cnt=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(check(i, j)){
                cnt++;
            }
        }
    }
    if(n==1&&m==1){
        cnt=1;
    }
    cout<<cnt<<endl;
}
