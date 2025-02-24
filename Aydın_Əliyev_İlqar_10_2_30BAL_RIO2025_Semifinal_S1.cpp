#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main(){

    int l, r;

    cin >> l >> r;

    for(int i = l; i <= r; i++){

        if(i < 10){

            cout << "Palindrome!" << endl;

            continue;
        }

        int ic = i, cnt = 0;

        while(ic > 0){

            cnt++;

            ic /= 10;
        }

        bool check = true;

        int iz = i;

        for(int j = 0; j < 1; j++){


            int cntt = cnt + 1;

            int k = pow(10, cntt/2);

            if((iz / k) != (iz % k)){

                check = false;

            }


        }

        if(check){

            cout << "Palindrome!" << endl;
        }

        else{

            cout << i << endl;
        }
    }
}
