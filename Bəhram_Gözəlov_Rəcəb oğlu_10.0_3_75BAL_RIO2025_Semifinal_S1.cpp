#include<bits/stdc++.h>
#include<algorithm>
#include<string>
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

bool palindrome(long number)
{
     if(number % 10 == number)
         return true;

      int digits = 0;
      int temp = number;
      while(temp)
      {

        temp /= 10;
        digits++;
      }



      int l = pow(10,digits);
      int r_ctr = 1;
      int ctr = 0;
      bool palindrome = true;
      int l_ctr = pow(10, digits - 1);
      int r = 10;

      while(palindrome && ctr < ceil(digits/2))
      {
          int res_l = (number % l / l_ctr);

          int res_r = (number % r / r_ctr);


          if(res_l != res_r)
          {
              palindrome = false;
          }

          r *= 10;

          r_ctr *= 10;

          l /= 10;
          l_ctr/=10;

          ctr++;
      }

      return palindrome;
}

signed main()
{
    int l,r;
    cin >> l >> r;

    for(int i = l; i <=r;i++)
    {
        if(palindrome(i))
            cout << "Palindrome!\n";
        else
            cout << i << '\n';
    }
}
