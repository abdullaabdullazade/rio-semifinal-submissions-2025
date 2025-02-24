#include <iostream>
using namespace std;
int main()
{
   long long t;
   cin>>t;
   while(t>0 and t--){
    long long n;
    cin>>n;
    long long a[n];
    bool b=true;
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<n-2;i+=3){
        if(a[i]<=a[i+1] and a[i+1]<=a[i+2])b=b;
        else {
            swap(a[i],a[i+2]);
            swap(a[i+1],a[i+2]);
            if(a[i]<=a[i+1] and a[i+1]<=a[i+2])b=b;
            else{
            swap(a[i],a[i+2]);
            swap(a[i+1],a[i+2]);
            if(a[i]<=a[i+1] and a[i+1]<=a[i+2])b=b;
            else b=false;
            }
        }
        if(b==false)break;
    }
    if(b==true)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
   }
}
