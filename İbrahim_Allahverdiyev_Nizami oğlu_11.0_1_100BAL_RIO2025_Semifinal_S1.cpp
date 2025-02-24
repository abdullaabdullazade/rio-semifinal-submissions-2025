#include <bits/stdc++.h>

using namespace std;
vector<int> a = {};
int main()
{
    long l, r;
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    string current = "", reversed = "";
    cin >> l >> r;

    for(long i = l; i <= r; i++){
        reversed = "";
        current = to_string(i);
        for(int j = 1; j <= current.length(); j++){
            reversed = reversed + current[current.length()-j];
        }
        if(current == reversed){
            cout << "Palindrome!" << endl;
        }else{
            cout << current << endl;
        }
    }
    //cout << current << endl << reversed << endl;
    return 0;

}
