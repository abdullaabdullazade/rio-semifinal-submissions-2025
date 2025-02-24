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
    bool dogru=true;
    for(int i=a;i<=b;i++){
        i1=to_string(i);
        for(int j=0;j<i1.size()/2;j++){
            if(i1[j]==i1[i1.size()-1-j]){
                dogru=true;
            }
            else{
                dogru=false;
                break;
            }
        }
        if(dogru==false){
            cout<<i1<<"\n";
        }
        else{
            cout<<"Palindrome!\n";
        }
    }
}


