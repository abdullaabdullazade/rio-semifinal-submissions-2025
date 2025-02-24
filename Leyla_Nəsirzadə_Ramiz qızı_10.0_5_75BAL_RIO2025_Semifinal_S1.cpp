#include <bits/stdc++.h>
using namespace std;
int main(){
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      long long l, r;
      cin>>l>>r;
      string s;
      for(long long i=l; i<=r; i++){
        s=to_string(i);
        string t=s;
        reverse(s. begin(), s.end());
        if(t==s){
            cout<<"Palindrome!"<<endl;
        }
        else{
            cout<<t<<endl;
        }
      }
}
