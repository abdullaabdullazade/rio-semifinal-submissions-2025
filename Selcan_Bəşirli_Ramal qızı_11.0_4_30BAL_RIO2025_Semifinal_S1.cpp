#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long l,r;
    cin>>l>>r; //8 12
    bool check;
    for (long long i=l; i <= r; i++)
    {
        check = true;
        long long digit = i;
        long long dg = i;
        long long last_digit = i%10;
        while(dg > 10)
        {
            if(dg%10 != dg/10%10) check = false;
            dg/=10;
        }
        if(check == true & dg == last_digit)
        {
            cout<<"Palindrome!"<<endl;
        }
        else cout<< digit << endl;
    }
}
