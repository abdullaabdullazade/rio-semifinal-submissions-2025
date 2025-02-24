#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define vii vector<vector<int>>
#define pii pair<int,int>
int main(){
    //freopen("A_input.txt","r",stdin);
    //freopen("A_output.txt","w",stdout);
    ull n,m;
    cin>>n>>m;
    for(ull i=n;i<=m;i++){
        string s = to_string(i);
        string s1=s;
        reverse(s.begin(),s.end());
        if(s == s1){
            cout<<"Palindrome!"<<endl;
        }else{
            cout<<i<<endl;
        }
    }
}
