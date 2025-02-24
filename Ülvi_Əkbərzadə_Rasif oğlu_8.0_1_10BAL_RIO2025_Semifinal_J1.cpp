#include <bits/stdc++.h>
#define ll long long
using namespace std;
void gecikme(int h,int m,int deq){
    m+=deq;
    if(m>=60){
        h+=m/60;
        m%=60;
    }
    if(h>=24){
        h%=24;
    }
    cout<<h<<':'<<m<<endl;
}
int main(){
    int n,h,m,deq;
    char ch;
    cin>>n;
    while(n--){
        cin>>h>>ch>>m;
        cin>>deq;
        gecikme(h,m,deq);
    }
}
