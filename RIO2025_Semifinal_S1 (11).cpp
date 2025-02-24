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
    ll n,m,left,right;
    sg num;
    bl flag;
    scanf("%lld %lld",&n,&m);
    for(int i=n;i<=m;i++)
    {
        num=ts(i),left=0,right=num.size()-1,flag=true;
        while(left<=right)
        {
            if(num[left]!=num[right])
            {
                flag=false;
                break;
            }
            else
            {
                left++,right--;
            }
        }
        if(flag)
        {
            printf("Palindrome!\n");
        }
        else
        {
            printf("%lld\n",i);
        }
    }
}