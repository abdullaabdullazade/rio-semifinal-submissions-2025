#include<bits/stdc++.h>
#define ll long long
#define l long
#define t int
#include<cmath>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int say,saat,deqiqe,gecikme;cin>>say;
char chart;
while(say--){
    cin>>saat>>chart>>deqiqe>>gecikme;
    if((((saat * 60) + (deqiqe + gecikme)) % 60) > 11) cout<< ((saat * 60) + (deqiqe + gecikme)) / 60 << ":" << ((saat * 60) + (deqiqe + gecikme)) % 60<<endl;
    else if ( 23 < (((saat * 60) + (deqiqe + gecikme)) % 60))cout<<"0"<<abs(24 - ((saat * 60) + (deqiqe + gecikme)) / 60)<<"e"<<((saat * 60) + (deqiqe + gecikme)) % 60<<endl;
    else cout<< ((saat * 60) + (deqiqe + gecikme)) / 60 << ":" << "0" << ((saat * 60) + (deqiqe + gecikme)) % 60<<endl;
}
return 0;
}
