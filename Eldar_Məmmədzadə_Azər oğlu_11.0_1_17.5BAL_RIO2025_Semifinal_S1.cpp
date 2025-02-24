#include <bits/stdc++.h>
using namespace std;
long long f(long long i)
{
    string s="";
    string h="";
    while (i>0){
        int rj=i%10;
        if (rj==1){
            s=s+"1";
            h="1"+h;
        }
        else if (rj==2){
            s=s+"2";
            h="2"+h;
        }
        else if (rj==3){
            s=s+"3";
            h="3"+h;
        }
        else if (rj==4){
            s=s+"4";
            h="4"+h;
        }
        else if (rj==5){
            s=s+"5";
            h="5"+h;
        }
        else if (rj==6){
            s=s+"6";
            h="6"+h;
        }
        else if (rj==7){
            s=s+"7";
            h="7"+h;
        }
        else if (rj==8){
            s=s+"8";
            h="8"+h;
        }
        else if (rj==9){
            s=s+"9";
            h="9"+h;
        }
        else if (rj==0){
            s=s+"0";
            h="0"+h;
        }
        i=i/10;
    }
    if (h==s){
        return 1;
    }
    else {
        return 0;
    }

}













int main()
{
    long long l,r;
    cin>>l>>r;
    for (long long i=l ; i<=r ; i++){
        if (f(i)==1){
            cout<<"Palindrome!"<<endl;
        }
        else {
            cout<<i<<endl;
        }
    }
}
