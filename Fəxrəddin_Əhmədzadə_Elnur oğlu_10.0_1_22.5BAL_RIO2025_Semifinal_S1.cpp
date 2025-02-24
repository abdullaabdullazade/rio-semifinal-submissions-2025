#include <bits/stdc++.h>
using namespace std;
bool pal(long long n){
    map<int,int> mp;
    while(n>0){
    int a=n%10;
    n/=10;
    mp[a]++;
    }
    int say=0;
    for(auto [x,y]:mp){
        if(y%2==1){
            say++;
        }
    }
    if(say<=1){
        return true;
    }
    else{
        return false;
    }

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long a,b;
    cin>>a>>b;
    for(long long i=a;i<=b;i++){
        if(i<10){
            cout<<"Palindrome!"<<endl;
        }
        else if(pal(i)){
            cout<<"Palindrome!"<<endl;
        }
        else{
            cout<<i<<endl;
        }

    }

}
