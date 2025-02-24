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
/*
void iwanttowinsemifinal()
{
    iwillwinsemifinal;
    //yaz canavar(optional)

    int n,cnt = 0;
    cin>>n;

    vector<int>v(n);

    vector<int>indecies;

    for(int i=0; i<n; i++) cin>>v[i];

    for(int i=1; i<n; i++)
    {

        if(v[i-1] > v[i])
        {
            indecies.push_back(i-1);
            cnt++;
        }
    }

    // if(cnt == 0) cout << 1 << endl;
    // else cout << cnt << endl;

     // for(int i : indecies) cout << i << endl;

     if(indecies.size() == 0)
     {
         cout << 1 << endl;
         return;
     }

    for(int i=0; i<indecies.size()-1; i++)
    {
        if(indecies[i] - indecies[i+1] == -1){
            cout << 2 << endl;
            return;
        }
        else cnt++;
    }

    if(cnt == 0) cout << 1 << endl;
    else cout << cnt << endl;
}
*/

void iwanttowinsemifinal()
{
    int n,k;
    cin>>n>>k;

    vector<int>a(k);
    vector<int>b(k);

    for(int i=0; i<k; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<k; i++)
    {
        cin>>b[i];
    }

    int mn = LLONG_MAX;

    for(int i=0; i<k; i++)
    {
        for(int j=0; j<k; j++)
        {
            mn = min(mn, abs(a[i]-b[j]));
        }
    }

    cout << mn << endl;
}

signed main()
{
    int specialtestcasesforsemifinalomggggg = 1;
    //cin>>specialtestcasesforsemifinalomggggg;
    while(specialtestcasesforsemifinalomggggg--) iwanttowinsemifinal();
}
