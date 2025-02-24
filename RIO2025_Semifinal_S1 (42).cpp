#include <bits/stdc++.h>
using namespace std;
int main()
{

    int l,r;
    cin>>l>>r;
    string s="";
    for(int i=l;i<r+1;i++){
        if(l<r){
            if(i%10==0){
                cout<<i<<endl;
        }
            else if(i/10==0){
                cout<<"Palindrome!"<<endl;
        }
            else if(i/100==i%10 && (i/10)>=10 ){
                cout<<"Palindrome!"<<endl;
            }
            else if (i%10!=0 && i%10==i/10){
                cout<<"Palindrome!"<<endl;
        }
            else if (i%11==0 || i%111==0 || i%1111==0 || i%11111==0 ||i%111111==0 || i%1111111==0 || i%11111111==0 || i%111111111==0 ){
                cout<<"Palindrome!"<<endl;
        }
        else{
            cout<<i<<endl;
        }
        }

    }


}

