#include <bits/stdc++.h>
using namespace std;

int main()
{
int n ,k;
cin>>n>>k;
vector<vector<int>>dp(n ,vector<int>(k));
vector<int>diff;
for(int i=0;i<n;i++){
    for(int j=0;j<k;j++){
        cin>>dp[i][j];
    }
}
for(int j=0;j<k;j++){
    for(int l=0;l<k;l++){
    long long  x=abs(dp[1][j]-dp[0][l]);
    diff.push_back(x);
}}
int mini=*min_element(diff.begin() ,diff.end());
cout<<mini<<endl;}
