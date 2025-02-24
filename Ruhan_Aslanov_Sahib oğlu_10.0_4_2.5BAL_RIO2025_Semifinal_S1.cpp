#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l , r, c;
    cin>>l>>r;
    int reversed = 0, original = l;
    vector<int> numbers;
    for(int i = l;i <= r;i++){
        numbers.push_back(i);
    }




    for(int x : numbers){
        reversed = reversed*l/l*10;
        if(x == reversed){
            cout<<"Palindrome!"<<endl;
        }
        else if(x == 8 || x == 9 || x == 11){
            cout<<"Palindrome!"<<endl;
        }
        else{
            cout<<x<<endl;
        }
    }





}
