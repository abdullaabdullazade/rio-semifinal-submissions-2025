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
    ll t,n,num1,num2,ans;
    bl flag;
    cin>>t;
    vc<ll>nums1,nums2;
    for(int c=0;c<t;c++)
    {
        nums1.clear();
        nums2.clear();
        ans=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>num1;
            nums1.push_back(num1);
        }
        for(int i=0;i<n;i++)
        {
            cin>>num2;
            nums2.push_back(num2);
        }
        sort(nums1.begin(),nums1.end());
        flag=true;
        for(int i=0;i<nums2.size();i++)
        {
            if(nums1[i]<nums2[i])
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            ans++;
        }
        while(next_permutation(nums1.begin(),nums1.end()))
        {
            flag=true;
            for(int i=0;i<nums2.size();i++)
            {
                if(nums1[i]<nums2[i])
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                ans=(ans+1)%1000000007;
            }
        }
        cout<<ans<<"\n";
    }
}
