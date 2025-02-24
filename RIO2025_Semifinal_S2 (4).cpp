#include <iostream>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cstring>
#include <bitset>
#include <string>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <unordered_set>
#define ll long long 
#define ld long double
#define db double 
#define ch char
#define sg string 
#define st set
#define stck stack
#define pq priority_queue 
#define dq deque
#define vc vector 
#define bl bool
#define mp map
#define cp cout.precision 
#define ts to_string
#define mst multiset 
#define uost unordered_set 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t,n,num;
    bl flag;
    scanf("%lld",&t);
    dq<ll>nums;
    for(int c=0;c<t;c++)
    {
        nums.clear(),flag=true;
        scanf("%lld",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&num);
            nums.push_back(num);
        }
        if(is_sorted(nums.begin(),nums.end()))
        {
            printf("1\n");
        }
        else
        {
            for(int i=0;i<nums.size()-1;i++)
            {
                if(nums[i]<nums[i+1])
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                printf("1\n");
            }
            else
            {
                printf("2\n");
            }
        }
    }
}