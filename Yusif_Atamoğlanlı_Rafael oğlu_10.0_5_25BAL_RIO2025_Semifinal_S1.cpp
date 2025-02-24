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
        int c=0;
        int f=s.size();
        if(f==1){
            cout<<"Palindrome!"<<endl;
        }
        else if(f%2==0){
            for(int j=0; j<f/2;j++){
                if(s[j]==s[f-j-1]){
                    c++;
                }
                else{
                    break;
                }
            }
            if(c*2==f){
                cout<<"Palindrome!"<<endl;
            }
            else{
                cout<<i<<endl;
            }
        }
        else
        {
            for(int j=0; j<f/2;j++){
                if(s[j]==s[f-j-1]){
                    c++;
                }
                else{
                    cout<<i<<endl;
                    break;
                }
                if(c*2+1==f){
                    cout<<"Palindrome!"<<endl;
                }
                else{
                    cout<<i<<endl;
                }
            }
        }

    }
}
