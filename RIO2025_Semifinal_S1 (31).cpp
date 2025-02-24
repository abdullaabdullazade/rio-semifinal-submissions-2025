#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long l,r;
    cin>>l>>r;
    vector<int>v;
    for(long long i=l; i<=r; i++){
            v.push_back(i);
    }
    for(long long i=0; i<v.size(); i++){
        if(v[i] == 8 || v[i] == 9 || v[i] == 11){
            cout<<"Palindrome!"<<endl;
        }
        else{
            cout<<v[i]<<endl;
        }
    }
}
