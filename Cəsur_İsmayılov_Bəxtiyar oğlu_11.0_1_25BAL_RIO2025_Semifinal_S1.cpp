#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int a;
    long long int b;
    cin>>a>>b;
    string i1;
    
    for(int i=a;i<=b;i++){
        i1=to_string(i);
        if(i<10){
            cout<<"Palindrome!"<<"\n";
        }
        else{
            if(i1[0]==i1[i1.size()-1]){
                cout<<"Palindrome!"<<"\n";
            }
            else{
                cout<<i<<"\n";
            }
        }
    }


}