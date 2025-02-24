#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    for (long long i=0 ; i<t ; i++){
        int s=1;
        long long n;
        cin>>n;
        long long a[n];
        for (long long i=0 ; i<n ; i++){
            cin>>a[i];
        }
        for (long long i=1 ; i<n-1 ; i++){
            if ((a[i-1]>a[i] && a[i+1]>a[i]) || a[i-1]<a[i] && a[i+1]<a[i]){
                s=2;
            }
        }
        cout<<s<<endl;

    }

}
