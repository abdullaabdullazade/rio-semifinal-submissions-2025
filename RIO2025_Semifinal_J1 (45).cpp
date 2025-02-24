///beated by AysAli
#include <bits/stdc++.h>
using namespace std;


int main(){
    int t, d;
    string s;
    cin>>t;
    while (t--){
        cin>>s; //10:00     23:59
        cin>>d; //60        2
        string saat=s.substr(0,2); //10     23
        string deqiqe=s.substr(3,2); //00       59
        int sa=stoi(saat); //10     23
        int dq=stoi(deqiqe); //0        59
        int sg=d/60; //1        0
        int dg=d%60; //0        2
        int sson=sa+sg; //11        23
        int dson=dq+dg; //0     61
        if(dson>=60){ // no     yes
            sson+=dson/60;       //1
            dson=dson%60;       //1
        }
        if (sson>=24) { //no        yes
            sson= sson%24; //  0
        }
        if (sson>=10 and sson<24) cout<<sson;
        else cout<<"0"<<sson;
        cout<<':';
        if (dson>=10 and dson<60) cout<<dson;
        else cout<<"0"<<dson;
        cout<<endl;
    }
    return 0;
}
