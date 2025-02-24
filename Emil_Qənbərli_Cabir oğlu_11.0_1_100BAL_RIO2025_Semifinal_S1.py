#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long a,b;
    cin >> a >> b;
    for(long long i=a;i<=b;i++){
        long long x=i,c=i,s=0;
        bool poli=0;
        while(x>0){
            int b=x%10;
            x/=10;
            s=s*10+b;
        }
        if(s==c) cout << "Palindrome!" << endl;
        else cout << i << endl;
    }
    return 0;
}
