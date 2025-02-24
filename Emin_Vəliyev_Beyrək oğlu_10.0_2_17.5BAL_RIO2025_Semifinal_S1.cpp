#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define endl '\n'
/*****************
    BAL VERRR
    PLS
*****************/
void emin(){
    int l,r;
    cin >>l>>r;
    for(int i=l; i<=r;i++){
        string s = to_string(i);
        for(int j=0; j<s.size()-1;j++){
            if(s[j] != s[s.size()-j-1]){
                cout<<i<<endl;
            }
            else cout<<"Palindrome!"<<endl;
            j++;
        }

    }

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t=1;
    //cin>>t;
    while(t--){
        emin();

    }
    return 0;
}
