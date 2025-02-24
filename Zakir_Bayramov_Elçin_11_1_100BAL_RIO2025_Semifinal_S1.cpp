#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int n, k;
    cin>>n>>k;
    int x=100000;
    vector<vector<int>> a(n, vector<int>(k));
    for(int i=0;i<n;++i){
        for(int j=0;j<k;++j){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<k; ++i){
        int s=a[0][i];
        for (int j=0;j<k;++j){
            x=min(x,abs(s-a[1][j]));
        }
    }
    for(int i=0;i<k; ++i){
        int s=a[1][i];
        for (int j=0;j<k;++j){
            x=min(x,abs(s-a[0][j]));
        }
    }
    cout<<x<<endl;
}
