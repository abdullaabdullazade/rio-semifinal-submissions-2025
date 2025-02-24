#include <bits/stdc++.h>
using namespace std;

int isize(long long n){
    long long l=0;
    while(n>0){
        l++;
        n/=10;
    }
    return l;
}

int min(long long n){
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
    for(i=0;i<j/2;i++){
        k=min(n);
        if(n/k!=n%10) return false;
        n/=10;
        n%=k/10;
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
