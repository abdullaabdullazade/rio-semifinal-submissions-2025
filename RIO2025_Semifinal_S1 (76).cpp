#include <iostream>
#include <string>
using namespace std;
int Palindrome(int k){
    int s=0;
    while(k){
        
        s=s*10+k%10;
        k/=10;
    }
    return s;

}
int main(){
    int n, k;
    cin>>n>>k;
    for(int i = n; i <=k; i++){
        if(i==Palindrome(i)) cout<<"Palindrome!"<<endl;
        else cout<<i<<endl;
    }    

    return 0;
}
