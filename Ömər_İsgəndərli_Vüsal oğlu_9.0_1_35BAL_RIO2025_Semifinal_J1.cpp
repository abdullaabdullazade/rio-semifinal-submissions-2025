#include <bits/stdc++.h>

#define int long long

using namespace std;


vector<char> ch = {'0','1', '2', '3', '4', '5', '6', '7', '8', '9'};


void solve(){

    string s;

    cin>>s;

    int n, saat = 0, deq = 0;
    cin>>n;

    for(int i = 0; i<10; i++)
    {
        if(s[0]==ch[i]){
            saat += i*10;
        }
    }
    for(int i = 0; i<10; i++)
    {
        if(s[1]==ch[i]){
            saat += i;
        }
    }

    for(int i = 0; i<10; i++)
    {
        if(s[3]==ch[i]){
            deq += i*10;
        }
    }

    for(int i = 0; i<10; i++)
    {
        if(s[4]==ch[i]){
            deq += i;
        }
    }
    deq += saat*60;

    if((deq + n)/60==24 && (deq+n)%60==0){
        cout<<"24:00"<<endl;
    }
    else if((deq +n)/60==24){
        if((deq+n)%60<10){
            cout<<"00"<<":"<<0<<(deq+n)%60<<endl;
        }
        else{
            cout<<"00"<<':'<<(deq+n)%60<<endl;
        }
    }

    else if((deq +n)/60>24){
        if((deq+n)/60<10 && (deq+n)%60<10){
            cout<<0<<(((deq+n)/60)%24)<<":"<<0<<(deq+n)%60<<endl;

        }
        else if((deq+n)/60<10){
            cout<<0<<(((deq+n)/60)%24)<<":"<<(deq+n)%60<<endl;
        }
        else if((deq+n)%60<10){
            cout<<(((deq+n)/60)%24)<<":"<<0<<(deq+n)%60<<endl;
        }
        else{
            cout<<(((deq+n)/60)%24)<<":"<<(deq+n)%60<<endl;
        }
    }
    else if((deq+n)/60<24){
        if((deq+n)/60<10 && (deq+n)%60<10){
            cout<<0<<(deq+n)/60<<":"<<0<<(deq+n)%60<<endl;

        }
        else if((deq+n)/60<10){
            cout<<0<<(deq+n)/60<<":"<<(deq+n)%60<<endl;
        }
        else if((deq+n)%60<10){
            cout<<(deq+n)/60<<":"<<0<<(deq+n)%60<<endl;
        }
        else{
            cout<<(deq+n)/60<<":"<<(deq+n)%60<<endl;
        }

    }

}


signed main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }




}
