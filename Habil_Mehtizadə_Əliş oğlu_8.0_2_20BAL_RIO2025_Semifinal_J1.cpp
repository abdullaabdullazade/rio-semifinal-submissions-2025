#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
    string s;
    int j;
    cin >> s >> j;
    int n=(s[0]-'0')*10+s[1]-'0';
    int ng=((s[3]-'0')*10)+s[4]-'0';
    if(j==60){
        n++;
    }
    else{
        ng+=j;
        if(ng>=60){
            int x=ng/60;
            ng-=x*60;
            n+=x;
        }
    }
    if(n>24){
        n=n%24;
    }
    if(n<=10 && ng<=10){cout << "0" << n << ":" << "0" << ng << "\n";continue;}
    if(ng<=10){cout << n<< ":" << "0" << ng << "\n";continue;}
    if(n<=10){cout << "0" << n << ":" << ng << "\n";continue;}
    cout << n << ":" << ng << "\n";
    }
}
