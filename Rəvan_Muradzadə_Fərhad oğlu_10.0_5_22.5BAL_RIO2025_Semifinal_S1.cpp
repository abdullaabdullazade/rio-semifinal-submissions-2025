#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    int l,r;
    cin>>l>>r;
    for (int i=l;i<=r;i++){
        if(i/10==0){
            cout<<"Palindrome!"<<endl;
        }else if (i%10==i/10%10) {
            cout<<"Palindrome!"<<endl;
        }else {
        cout<<i<<endl;
        }
    }
}
