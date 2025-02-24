#include <bits/stdc++.h>

//tree policy
//assoc container
//yariscoxgecbaslayiryuxumgeldi

using namespace std;

#define ll long long
#define int ll

const int sz = 2e5 + 7;
const int mod = 1e9+7;

#define iwillwinsemifinal ios_base::sync_with_stdio(false)

bool check(int a)
{
    if(a<10) return true;
    string s = to_string(a);

    int n = s.size();

    for(int i=0; i<n/2; i++)
    {
        if(s[i] != s[n-i-1])
        {

            return false;
        }
    }

    return true;
}

void iwanttowinsemifinal()
{
    iwillwinsemifinal;
    //yaz canavar(optional)

    int l,r;
    cin>>l>>r;

    for(int i=l; i<=r; i++)
    {
        if(check(i))
        {
            cout << "Palindrome!" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }



}

signed main()
{
    int specialtestcasesforsemifinalomggggg = 1;
    //cin>>tc;
    while(specialtestcasesforsemifinalomggggg--) iwanttowinsemifinal();
}
