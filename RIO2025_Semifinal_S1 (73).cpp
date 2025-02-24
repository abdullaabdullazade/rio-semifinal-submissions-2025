#include <iostream>

using namespace std;

int main()
{

    int l;
    int r;
    int i;
    cin >> l >> r;
    for (i = l; i <= r; i++)
    {
        if (i < 10)
        {
            cout << "Palindrome!\n";
        }
        else if (i % 11 == 0)
        {
            cout << "Palindrome!\n";
        }
        else
        {
            cout << i << "\n";
        }
    }

    return 0;
}
