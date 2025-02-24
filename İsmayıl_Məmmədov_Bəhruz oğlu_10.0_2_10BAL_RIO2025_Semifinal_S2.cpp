///naber mudur
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,t;
    cin>>n;
    vector<long long>v;
    vector<long long>v1;
    vector<long long>v2;
    for(int i=0;i<n;i++){
        v.clear();
        v1.clear();
        long long q;
        cin>>q;
        for(int l=0;l<q;l++){
            cin>>t;
            v.push_back(t);
        }
        v1=v;
        sort(v1.begin(),v1.end());
        v2=v1;
        reverse(v2.begin(),v2.end());
        if(v1==v or v2==v){
                cout<<"1"<<endl;

        }else{
            cout<<"2"<<endl;
            }
    }
}
