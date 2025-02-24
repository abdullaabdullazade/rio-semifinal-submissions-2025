#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#define ll long long
#define db double
#define bl bool
#define ch char
#define sg string
#define vc vector
#define st set
#define mst multiset
#define mp map
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t,n,num;
    sg nums,numsC;
    cin>>t;
    st<ll>s;
    for(int c=0;c<t;c++)
    {
        nums.clear();
        s.clear();
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            s.insert(num);
            nums.push_back(num+'0');
        }
        numsC=nums;
        reverse(numsC.begin(),numsC.end());
        if(nums==numsC)
        {
            if(s.size()==n)
            {
                cout<<"No";
            }
            else
            {
                cout<<"Yes";
            }
        }
        else if(n==3)
        {
            if(nums=="132" || nums=="213" || nums=="321")
            {
                cout<<"No";
            }
            else
            {
                cout<<"Yes";
            }
        }
        cout<<"\n";
    }
}
