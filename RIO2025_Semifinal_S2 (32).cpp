#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int say=n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        for(int i=0;i<n;i++){
            int j=0;
            while(a[j]!=b[i]){
                j++;
            }
            while(a[j+1]==b[i+1] && j<n-1 && i<n-1){
                i++;
                say--;
                j++;
            }
            while(a[j-1]==b[i+1] && j>0 && i<n-1){
                say--;
                i++;
                j--;
            }
        }
        cout<<say<<endl;
    }
    return 0;
}
