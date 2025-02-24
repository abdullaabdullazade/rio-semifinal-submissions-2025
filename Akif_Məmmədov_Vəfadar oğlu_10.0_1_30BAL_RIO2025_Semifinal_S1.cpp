#include <bits/stdc++.h>
using namespace std;

bool pal(long long n){
    string a=to_string(n);
    long long i;
    for(i=0;i<a.size()/2;i++){
        if(a[i]!=a[a.size()-1]) return false;
    }
    return true;
}

long long n,m,i,e,j,k,l;
int main(){
    cin>>n>>m;
    for(i=n;i<=m;i++){
        if(pal(i)) cout<<"Palindrome!"<<"\n";
        else cout<<i<<"\n";
    }
    return 0;
}
