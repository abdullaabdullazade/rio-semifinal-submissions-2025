#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, i;
    cin >> a >> b;
    for (  i = a ; i <= b ; i++ )
    {
        string h = to_string(i);
        string k = h;
        reverse(k.begin(), k.end());
        if ( k == h )
        {
            cout << "Palindrome!" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }
}
