#include<bits/stdc++.h>
using namespace std;
int c;
void print( string::size_type f,  string const &s)
{
    if (f ==  string::npos) {
         cout << "not found\n";
    } else {
         c=stoi(s.substr(f+1));
    }
}
int main(){
    int n,t,d,e;
    string s;
    cin>>n;
    while(n--){
        cin>>s>>t;
        int a=stoi(s);
        int f=s.find(":");
        print(f,s);
        d=t%60;
        e=t/60;
        if(c+d>60){
            if(a+e>24){
            cout<<a+e-24<<":"<<c+d-60<<endl;
            }
            else{
            cout<<a+e<<":"<<c+d-60<<endl;
            }
        }
        else{cout<<a+e<<":"<<c+d<<endl;}
    }
}
