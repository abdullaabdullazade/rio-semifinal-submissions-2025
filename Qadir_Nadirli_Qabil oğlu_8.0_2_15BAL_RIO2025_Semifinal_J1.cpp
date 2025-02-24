#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t,d,n,a;
char k;
cin>>t;
while(t--){
  cin>>a;
  cin>>k;
  cin>>n;
  cin>>d;
  if(d+n>59 && a+((d+n)/60)<=23){
    a=a+((d+n)/60);
    n=(d+n)-60*((d+n)/60);
    int a1=a/10%10;
    int a2=a%10;
    int n1=n/10%10;
    int n2=n%10;
    cout<<a1<<a2<<":"<<n1<<n2<<endl;
  }
  if(d+n>59 && a+((d+n)/60)>23){
    a=((d+n)/60)-(24-a);
    n=(d+n)-60*((d+n)/60);
    int a1=a/10%10;
    int a2=a%10;
    int n1=n/10%10;
    int n2=n%10;
    cout<<a1<<a2<<":"<<n1<<n2<<endl;
  }
  if(d+n<=59){
    n=d+n;
    int a1=a/10%10;
    int a2=a%10;
    int n1=n/10%10;
    int n2=n%10;
    cout<<a1<<a2<<":"<<n1<<n2<<endl;
  }

  }

}

