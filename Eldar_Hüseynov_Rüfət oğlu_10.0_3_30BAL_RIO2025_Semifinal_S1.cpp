#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define F first
#define S second
#define tariyel ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int sz=2e6+5;
vector<int> v={0,10};
void dp(vector<int> v,int N){
    for(int i=2;i<N;i++){
        v.pb(v[i-1]*10);
    }
}
int uzunluq(int n){
    int N=1;
    while(1){
        if(n>=10){
            n/=10;
            N++;
        }
        else{
            return N;
        }
    }
}
bool palindrome(int n,int N){
    dp(v,N);
    for(int i=0;i<N/2;i++){
        if(n/v[i+1]%v[i]!=n%v[i+1]){
            return false;
        }
    }
    return true;
}
signed main(){
    tariyel;
    int l,r;
    cin>>l>>r;
    for(int i=l;i<=r;i++){
        int N=uzunluq(i);
        if(palindrome(i,N)){
            cout<<"Palindrome!"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
    return 0;
}
