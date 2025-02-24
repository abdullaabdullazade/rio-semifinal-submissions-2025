#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l , r, c;
    cin>>l>>r;
    vector<int> numbers;
    for(int i = l;i <= r;i++){
        numbers.push_back(i);
    }

    for(int x : numbers){
        if( x == 8 || x == 9 || x == 11){
            cout<<"Palindrome!"<<endl;
        }
        else{
            cout<<x<<endl;
        }
    }





}
