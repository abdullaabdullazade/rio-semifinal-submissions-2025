#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int pal(int n){
    string s=to_string(n);
    int i=0,j=s.size()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio();
    cin.tie();
    cout.tie();
    ll l,r;
    cin>>l>>r;
    for(int i=l;i<=r;i++){
        if(pal(i)){
            cout<<"Palindrome!"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
    return 0;
}
