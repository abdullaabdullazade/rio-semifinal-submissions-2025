#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    string x;
    int n,late;
    bool fl = true;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>x;
        cin>>late;
        int h = (x[0]-'0')*10+x[1]-'0';
        int m = (x[3]-'0')*10+x[4]-'0';
        while (fl){
            m+=late;
            while (m>=60){
                h+=1;
                m-=60;
            }
            while (h>=24){
                h-=24;
            }
            fl=false;
        }
        if (h<10 && m<10)
            cout<<0<<h<<":"<<0<<m<<endl;
        else if (h>10 && m<10)
            cout<<h<<":"<<0<<m<<endl;
        else if (h<10 && m>10)
            cout<<0<<h<<":"<<m<<endl;
        else
            cout<<h<<":"<<m<<endl;
        fl=true;
    }
    return 0;
}
