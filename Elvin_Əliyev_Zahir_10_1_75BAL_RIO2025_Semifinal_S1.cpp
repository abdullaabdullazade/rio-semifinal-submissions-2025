#include <bits/stdc++.h>
using namespace std;
bool check(int n){
    int b=n;
    int cnt=0;
    int cnt_2=0;
    while(n>0){
        n=n/10;
        cnt++;
    }
    int a[cnt];
    for(int i=0;i<cnt;i++){
        a[i]=b%10;
        b=b/10;
    }
    for(int i=0;i<cnt;i++){
        if(a[i]==a[cnt-i-1]){
            cnt_2++;
        }
    }
    if(cnt_2==cnt){
        return true;
    }
    else{
        return false;
    }

}
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=n;i<=k;i++){
        if(check(i)){
            cout<<"Palindrome!"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
}
