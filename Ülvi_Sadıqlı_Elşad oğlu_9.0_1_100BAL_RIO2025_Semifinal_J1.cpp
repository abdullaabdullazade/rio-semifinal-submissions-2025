#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int k;
        cin>>k;
        int saat=(int(s[0])-48)*10+(int(s[1])-48);
        int deq=(int(s[3])-48)*10+(int(s[4])-48);
        if(k%60==0){
            saat=saat+(k/60);
            if(saat>=24){
                saat-=24;
            }
            cout<<saat<<":"<<"00"<<"\n";
        }
        else{
            saat = saat + (k / 60);
            deq=deq+(k%60);
            if(deq>=60){
                deq-=60;
                saat++;
            }
            if(saat>=24){
                saat=saat-24;
            }
            if(saat==0){
                cout<<"00:";
            }
            if(deq>=0 and deq<=9){
                cout<<"0"<<deq<<"\n";
            }
            else cout<<saat<<":"<<deq<<"\n";
        }
    }
}
