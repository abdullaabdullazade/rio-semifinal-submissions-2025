#include <bits/stdc++.h>
using namespace std;

long long isize(long long n){
    long long l=0;
    while(n>0){
        l++;
        n/=10;
    }
    return l;
}

long long min(long long n){
    long long l=0,k=1;
    while(n>0){
        l++;
        n/=10;
    }
    while(l>1){
        l--;
        k*=10;
    }
    return k;
}

bool pal(long long n){
    long long i,j=isize(n),k;
    k=min(n);
    for(i=0;i<j/2;i++){
        if(n/k!=n%10) return false;
        n/=10;
        n%=k/10;
        k/=100;
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
