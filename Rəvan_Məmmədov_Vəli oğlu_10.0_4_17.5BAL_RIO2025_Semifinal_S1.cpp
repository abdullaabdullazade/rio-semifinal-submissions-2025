#include <bits/stdc++.h>
using namespace std;
int check(int s){
    vector<long long>v;
    int t;
    while(s!=0){
       t=s%10;
       v.push_back(t);
       s=s/10;
    }
    long long l=v.size()-1,r=0;
    while(r<l){
        for(int i=r;i<l;i++){
            if(v[r]==v[l]){
                true;
            }
            else if(v[r]!=v[l]){
                return false;
            }
        }
        return true;
    }

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<long long>v;
    long long a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(check(i)){
            cout<<"Palindrome!"<<endl;
        }
        else{
            cout<<i<<endl;
        }

    }
}
