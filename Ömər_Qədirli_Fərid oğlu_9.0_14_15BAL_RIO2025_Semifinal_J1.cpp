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
    long long n,t,d,e,l;
    string s;
    cin>>n;
    while(n--){
        cin>>s>>t;
        long long a=stoi(s);
        long long f=s.find(":");
        print(f,s);
        l=a*60+c+t;
        d=l/60;
        e=l%60;
        if(e>=10){
            if(d<=33 && d>23){
                cout<<"0"<<d-24<<":"<<e<<endl;
            }
            else if(d>33){
                cout<<d-24<<":"<<e<<endl;
            }
            else{
                cout<<d<<":"<<e<<endl;
            }
        }
        else{
            if(d<=33 && d>23){
                cout<<"0"<<d-24<<":0"<<e<<endl;
            }
            else if(d>33){
                cout<<d-24<<":0"<<e<<endl;
            }
            else{
                cout<<d<<":0"<<e<<endl;
            }
        }
    }
}
