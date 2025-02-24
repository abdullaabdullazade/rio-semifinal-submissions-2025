// designed by Nrutas
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ull unsigned long long
#define endl '\n'
#define vct vector
#define fst first
#define snd second
#define pb push_back
#define all(v) v.begin(), v.end()
#define str string
#define fori for(int i=0; i<n; i++)
const int Max=INT_MAX;
const ll inf=LLONG_MAX;
const int Mod=9929;
void solve()
{
    int a,b;
    cin>>a>>b;
    bool ispalindrome;
    for(int i=a; i<=b; i++)
    {
        ispalindrome=true;
        str s=to_string(i);
        int left=0,right=s.size()-1;
        while(left<=right)
        {
            if(s[left]!=s[right])
            {
                ispalindrome=false;
                break;
            }
            left++;
            right--;
        }
        if(ispalindrome)
            cout<<"Palindrome!\n";
        else
            cout<<i<<endl;
    }
}
int main()
{
    int t;
    //cin>>t;
    t=1;
    while(t--)
        solve();
}
