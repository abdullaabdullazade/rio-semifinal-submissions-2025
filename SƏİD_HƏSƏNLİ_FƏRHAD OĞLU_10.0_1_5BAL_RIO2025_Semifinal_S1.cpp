
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long q,w;
    string x;
    cin>>q>>w;
    for(long long i=q;i<=w;i++){
        x = to_string(i);
        if(x.begin()==x.end()){
            cout<<"Palindrome!"<<endl;
        }else{
            cout<<x<<endl;
        }
    }
}













/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,a,b,c;
    cin>>n;
    while(n--){
        int b1=k-a;
        int b2=a-b;
        int b3=b-c;
        int b4=c-k;
        if(b1+b3==b2+b4){

        }
    }
}

*/
