#include <iostream>
using namespace std;
int main(){

    int l , r;

    cin >> l >> r;
    for (int i = l;i<r+1;i++){
            int naoborot;
            if (i >10){
                naoborot = ((i%10)*10)+(i/10);
            }
            if (naoborot == i || i%10!=0 && i/10==0){
                cout << "Palindrome!\n" ;
            }
            else{
                cout << i << endl;
            }
    }
}
