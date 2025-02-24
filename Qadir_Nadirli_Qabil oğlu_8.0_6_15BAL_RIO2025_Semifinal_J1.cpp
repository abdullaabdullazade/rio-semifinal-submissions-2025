#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t,d,n,a,a1,a2,n1,n2;
char k;
cin>>t;
while(t--){
  cin>>a>>k>>n>>d;
  if(d+n>59 && a+((d+n)/60)<=23){
    a=a+((d+n)/60);
    n=(d+n)-60*((d+n)/60);
     a1=a/10%10;
     a2=a%10;
     n1=n/10%10;
     n2=n%10;
    cout<<a1<<a2<<k<<n1<<n2<<endl;

  }
  if(d+n>59 && a+((d+n)/60)>23){
    a=((d+n)/60)-(24-a);
    n=(d+n)-60*((d+n)/60);
    a1=a/10%10;
     a2=a%10;
     n1=n/10%10;
     n2=n%10;
    cout<<a1<<a2<<k<<n1<<n2<<endl;
  }

  else{
    n=d+n;
     a1=a/10%10;
     a2=a%10;
     n1=n/10%10;
     n2=n%10;
    cout<<a1<<a2<<k<<n1<<n2<<endl;

  }


  }

}

