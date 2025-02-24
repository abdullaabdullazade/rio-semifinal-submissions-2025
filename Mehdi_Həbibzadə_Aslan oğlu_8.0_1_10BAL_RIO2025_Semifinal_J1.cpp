#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--){
        string s, deqiqes, saats;
        cin>>s;
        long long d, deq, saat;
        cin>>d;
        saats[0]= s[0]; saats[1]= s[1];
        deqiqes[0]=s[3]; deqiqes[1]=s[4];
        saat=stoi(saats); deq=stoi(deqiqes);
        deq+=d;
        if(deq>=60){
            saat+=deq/60;
            deq%=60;
        }
        if (saat>=24){
            saat%=24;
        }
        if(saat<10 and deq>9) cout<<0<<saat<<':'<<deq<<endl;
        else if(deq<10 and saat>9) cout<<saat<<':'<<0<<deq<<endl;
        else if(saat<10 && deq<10) cout<<0<<saat<<':'<<"0"<<deq<<endl;
        else cout<<saat<<':'<<deq<<endl;


    }
    return 0;
}
