#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<climits>
// humans create their own gods only in a predicament
using namespace std;

#define int long

void print(auto& list)
{
    for(auto & a : list)
    {
        cout << a << ' ';
    }

    cout << '\n';
}

signed main()
{
    int n,k;
    cin >> n >> k;

    int rees = INT_MAX;

    if(n == 2)
    {
        vector<int> a(k);
        vector<int> b(k);

        for(int i = 0; i < k; i++)
        {
            cin >> a[i];
        }

        for(int i = 0; i < k; i++)
        {
            cin >> b[i];
        }



        for(int i = 0; i < k; i++)
        {
            for(int j = 0; j < k; j++)
            {


                    if(abs(a[i] - b[j]) < rees)
                        rees = abs(a[i] - b[j]);
            }
        }

        cout << rees;
    }
}
