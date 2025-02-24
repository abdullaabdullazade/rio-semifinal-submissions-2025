//designed by PlasticineEater354
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    while(n--){
        string s;
        ll j;
        cin>>s>>j;
        ll h=j/60;
        ll d=j%60;
        int g1=s[4]-'0';
        int g2=s[3]-'0';
        int g=g2*10+g1;
        int y1,y2,z1,z2;
        if(g+d<60){
            g+=d;
             y1=g/10;
             y2=g%10;
            s[3]=y1+'0';
            s[4]=y2+'0';
        }
        else{
        	
             y1=(g+d-60)/10;
             y2=(g+d-60)%10;
            s[3]=y1+'0';
            s[4]=y2+'0';
            h++;
            //cout<<h;
        }
        int m1=s[0]-'0';
        //cout<<m1<<" ";
        int m2=s[1]-'0';
        int m=m1*10+m2;
        //cout<<m<<" ";
        if(m+h<24){
            m+=h;
            z1=m/10;
            z2=m%10;
            // cout<<z1<<z2<<" m";
            s[0]=z1+'0';
            s[1]=z2+'0';

        }
        else{
        	//cout<<z1<<z2<<" m";
             z1=(m+h-24)/10;
             z2=(m+h-24)%10;
            //s[3]=z1+'0';
            //s[4]=z2+'0';

        }
        cout<<z1<<z2<<':'<<y1<<y2<<endl;

    }
    return 0;
}

