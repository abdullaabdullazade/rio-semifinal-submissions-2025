#pragma GCC ("O3")
#pragma GCC ("Ofast")
#include <bits/stdc++.h>
using namespace std;

#define hurryup ios_base::sync_with_studio(0); cin.tie(0); cout.tie(0);
//#define int long long

void solve(){
    string s, dd;
    char c;
    int k, n;
    cin>>s>>n;
    if(n<60){
        k = 0;
        k+=int(s[3])-48;
        k*=10;
        k+=int(s[4])-48;
        if(n+k < 60){
            k+=n;
            string k1 = to_string(k);
            s[3] = k1[0];
            s[4] = k1[1];
        }
        else{
            k+=n;
            k -=60;
            if(k<10){
                if(s[1] == '9' and s[0] == '0'){
                    s[0] = '1';
                    s[1] = '0';
                    s[3] = '0';
                    s[4] = char(k+48);
                }
                else if(s[0] == '1' and s[1] == '9'){
                    s[0] = '2';
                    s[1] = '0';
                    s[3] = '0';
                    s[4] = char(k+48);
                }
                else if(s[0] == '2' and s[1] == '3'){
                    s[0] = '0';
                    s[1] = '0';
                    s[3] = '0';
                    s[4] = char(k+48);
                }
                else{
                    s[1] = s[1]+1;
                    s[3] = '0';
                    s[4] = char(k+48);
                }
            }
        }
    }
    else{
        int p = n/60;
        n -= p*60;
        while(p--){
            if(s[1] == '9' and s[0] == '0'){
                s[0] = '1';
                s[1] = '0';
            }
            else if(s[0] == '1' and s[1] == '9'){
                s[0] = '2';
                s[1] = '0';
            }
            else if(s[0] == '2' and s[1] == '3'){
                s[0] = '0';
                s[1] = '0';
            }
            else{
                s[1]  = s[1]+1;
            }
        }
        k = 0;
        k+=int(s[3])-48;
        k*=10;
        k+=int(s[4])-48;
        if(n+k < 10){
            k+=n;
            s[3] = '0';
            s[4] = char(k+48);
        }
        else if(n+k < 60 and n+k > 10){
            k+=n;
            string k1 = to_string(k);
            s[3] = k1[0];
            s[4] = k1[1];
        }
        else{
            k+=n;
            k -=60;
            if(k<10){
                if(s[1] == '9' and s[0] == '0'){
                    s[0] = '1';
                    s[1] = '0';
                    s[3] = '0';
                    s[4] = char(k+48);
                }
                else if(s[0] == '1' and s[1] == '9'){
                    s[0] = '2';
                    s[1] = '0';
                    s[3] = '0';
                    s[4] = char(k+48);
                }
                else if(s[0] == '2' and s[1] == '3'){
                    s[0] = '0';

                    s[1] = '0';
                    s[3] = '0';
                    s[4] = char(k+48);
                }
                else{
                    s[1] = s[1]+1;
                    s[3] = '0';
                    s[4] = char(k+48);
                }
            }
        }
    }
    cout<<s<<dd<<endl;

}

signed main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}
