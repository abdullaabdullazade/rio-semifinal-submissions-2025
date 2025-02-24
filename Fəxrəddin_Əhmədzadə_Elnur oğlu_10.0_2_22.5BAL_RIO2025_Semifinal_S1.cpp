#include <bits/stdc++.h>
using namespace std;
bool pal(long long n){
    string s=to_string(n);
    for(int i=0;i<s.size();i++){
        if(s[i]!=s[s.size()-i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long a,b;
    cin>>a>>b;
    for(long long i=a;i<=b;i++){
        if(i<10){
            cout<<"Palindrome!"<<endl;
        }
        else if(pal(i)){
            cout<<"Palindrome!"<<endl;
        }
        else{
            cout<<i<<endl;
        }

    }

}
