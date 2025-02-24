#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l,r;
    cin>>l>>r; //8 12
    bool check;
    for (int i=l; i <= r; i++){
        check = true;
        int digit = i;
        int dg = i;
        int last_digit = i%10;
        while(dg > 10)
        {
            if(dg%10 != dg/10%10) check = false;
            dg/=10;
        }
        if(check == true & dg == last_digit){
            cout<<"Palindrome!"<<endl;
        }
        else cout<< digit << endl;
}
    }
