    #include<bits/stdc++.h>
    #include<algorithm>
    #include<string>>
    // humans create their own gods only in a predicament
    using namespace std;

    void print(auto& list)
    {
        for(auto & a : list)
        {

            cout << a << ' ';
        }

        cout << '\n';
    }

    bool palindrome(int number)
    {
        if(number % 10 == number)
            return true;

        string str = to_string(number);

        string rev(str.rbegin(), str.rend());

        return str == rev;
    }

    int main()
    {
        int l,r;
        cin >> l >> r;

        for(int i = l; i <= r; i++)
        {
            if(palindrome(i))
                cout << "Palindrome!\n";
            else
                cout << i << '\n';
        }
    }
