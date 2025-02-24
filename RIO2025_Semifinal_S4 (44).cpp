#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int n,k;
    cin>>n>>k;
    int a[n][k];
    vector<int>v;
    if(n==2){
    for( int i=0 ; i<n ; i++){
        for( int j=0 ; j<k ; j++){
            cin>>a[i][j];
        }
        }
        for( int i=0 ; i<k ; i++){
        for( int j=0 ; j<k ; j++){
            v.push_back(abs(a[0][i]-a[1][j]));
        }
    }
    cout<<*min_element(v.begin(), v.end())<<endl;
}
}
