#include <iostream>
#include <string>
using namespace std;
long long Palindrome(long long k){
    long long s=0;
    while(k){
        
        s=s*10+k%10;
        k/=10;
    }
    return s;

}
int main(){
    long long n, k;
    cin>>n>>k;
    for(long long i = n; i <=k; i++){
        if(i==Palindrome(i)) cout<<"Palindrome!"<<endl;
        else cout<<i<<endl;
    }    

    return 0;
}
