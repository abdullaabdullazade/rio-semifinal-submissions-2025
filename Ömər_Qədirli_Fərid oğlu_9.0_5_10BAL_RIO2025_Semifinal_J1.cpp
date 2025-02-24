#include<bits/stdc++.h>
using namespace std;
long long c;
void print( string::size_type f,  string const &s)
{
    if (f ==  string::npos) {
         cout << "not found\n";
    } else {
         c=stoi(s.substr(f+1));
    }
}
int main(){
    long long n,t,d,e;
    string s;
    cin>>n;
    while(n--){
        cin>>s>>t;
        long long a=stoi(s);
        long long f=s.find(":");
        print(f,s);
        d=t%60;
        e=t/60;
        if(c+d>10){
            if(c+d>=60){
                if(a+e>=23){
                    cout<<"0"<<a+e-23<<":"<<c+d-60<<endl;
                }
                else{
                    cout<<a+e+1<<":"<<c+d-60<<endl;
                }
            }
            else{
                if(a+e>=24){
                cout<<"0"<<a+e-24<<":"<<c+d<<endl;
                }
                else{
                cout<<a+e<<":"<<c+d<<endl;
                }
            }
        }
        else{
                if(a+e>=24){
                cout<<"0"<<a+e-24<<":0"<<c+d<<endl;
                }
                else{
                cout<<a+e<<":0"<<c+d<<endl;
                }
        }
    }
}
