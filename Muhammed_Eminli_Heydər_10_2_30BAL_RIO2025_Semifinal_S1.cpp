#include <bits/stdc++.h>
using namespace std;
int main(){
    long long l, r;
    cin>>l>>r;
    for(long long i = l; i <= r; i++){
        string x = to_string(i);
        if(x.size() == 1){
                cout<<"Palindrome!"<<endl;
                continue;
        }
        else{
            set<char> st;
            for(auto j : x) st.insert(j);
            if(st.size() == 1){
                    cout<<"Palindrome!"<<endl;
                    continue;
            }
        }
        cout<<i<<endl;
    }
    return 0;
}
