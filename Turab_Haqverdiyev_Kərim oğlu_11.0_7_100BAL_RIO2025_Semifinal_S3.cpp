#include <bits/stdc++.h>
using namespace std;

int n;int main(){
    ios_base::sync_with_stdio();cout.tie(0);cin.tie(0);

    int t;
    cin>>t;

    for(int _=0;_<t;_++){
        int n;
        cin>>n;
        long long a[n],b[n];
        for(int i=0;i<n;i++) cin>>a[i];

        int say=0;
        vector<int>v;
        for(int i=0;i<n-1;i++) if(a[i]>a[i+1]){
            say++;
            v.push_back(i+1);
        }
        if(a[n-1]>a[0]){
            say++;
            v.push_back(n);
        }
        if(say==0){
            say++;
            v.push_back(1);
        }
        cout<<say<<endl;
        for(int i=0;i<say;i++) cout<<v[i]<<' ';
        cout<<endl;
    }
}
