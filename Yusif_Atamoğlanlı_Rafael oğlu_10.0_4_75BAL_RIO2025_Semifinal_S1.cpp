#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sortv sort(v.begin(),v.end())

int main()
{
    long long l,r;
    cin>>l>>r;
    for(int i=l ;i<=r; i++){
        if(i>=1 and i<100){
            string s=to_string(i);
            string sr=s;
            reverse(s.begin(),s.end());
            if(s==sr){
                cout<<"Palindrome!\n";
            }
            else{
                cout<<i<<"\n";
            }
            continue;
        }
        string s=to_string(i),s2;
        string sr=s;
        string s1=s.substr(0,s.size()/2);
        if(s.size()%2==1)
        s2=s.substr(s.size()/2+1,s.size());
        else s2=s.substr(s.size()/2,s.size());
        reverse(s2.begin(),s2.end());
        if(s1==s2){
            cout<<"Palindrome!\n";
        }
        else{
            cout<<i<<"\n";
        }

    }
}
