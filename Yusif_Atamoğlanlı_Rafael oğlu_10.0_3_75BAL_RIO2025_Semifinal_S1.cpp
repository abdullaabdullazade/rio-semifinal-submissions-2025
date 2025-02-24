#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sortv sort(v.begin(),v.end())

int main()
{
    long long l,r;
    cin>>l>>r;
    for(int i=l ;i<=r; i++){
        string s=to_string(i);
        string sr=s;
        if(s[0]!=s[s.size()-1] ){
            cout<<i<<"\n";
            continue;
        }

        reverse(s.begin(),s.end());
        if(s==sr){
            cout<<"Palindrome!\n";
        }
        else{
            cout<<i<<"\n";
        }

    }
}
