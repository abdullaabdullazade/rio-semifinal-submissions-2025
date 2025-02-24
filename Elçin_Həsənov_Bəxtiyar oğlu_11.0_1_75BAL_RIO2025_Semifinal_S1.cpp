#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <cmath>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);




    long long l, r;
    cin>>l>>r;


    for(long long i = l; i<=r; i++){

    long long n, original;
    vector<long long>v;
    n = i;
    original = i;

    if(n < 10 && n > 0){
        v.push_back(n);
    }

    while(n / 10 != 0 ){
        long long temp = n % 10;
        v.push_back(temp);
        n = n - temp;
        n = n / 10;
        if ( n == 0){
            v.push_back(1);
        }
        else if (n < 10 && n > 0){
            v.push_back(n);
        }
    }

    long long gathered=0, pwr = v.size();
    for(long long i = 0; i < v.size(); i++){
        gathered += v[i] * pow(10, pwr - 1);
        pwr--;
    }

    if(gathered == original){
        cout<<"Palindrome!"<<endl;
    }
    else{
        cout<<original<<endl;
    }


}


}


