#include <iostream>
using namespace std;
int main()
{
    long long n, a, b, d, sum;
    char c;
    cin>>n;
    while(n--){
            sum = 0;
        cin>>a>>c>>b>>d;
        sum+=a*60 + b + d;
    if(sum/60 == 12){
        cout<<0<<0<<':';
    }
    else if(sum/60 < 10){
        cout<<0<<sum/60<<':';
    }
    else {
        cout<<sum/60<<':';
    }
    if(sum%60 < 10){
        cout<<0<<sum%60<<endl;
    }
    else {
        cout<<sum%60<<endl;
    }
    }
}
