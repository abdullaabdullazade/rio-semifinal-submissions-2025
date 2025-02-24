#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define endl '\n'
/*****************
    BAL VERRR
    PLS
*****************/

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s,a;
    int l,r;
    cin >>l>>r;
    for(int i=l; i<=r;i++){
        s= to_string(i);
        a=s;
        reverse(a.begin(), a.end());
        if(s==a){
            cout<<"Palindrome!"<<endl;

        }
        else cout<<s<<endl;


    }


    return 0;
}

