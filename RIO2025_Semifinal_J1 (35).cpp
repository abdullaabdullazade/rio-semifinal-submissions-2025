#include <iostream>
using namespace std;
int main(){
    int n,i;
    string c;
    cin>>n;
    while(n--){
        cin>>c>>i;
        if(c[3]-48+c[4]-48+i<60){
                cout<<c[0]<<c[1]<<":"<<(c[3]-48)*10+c[4]-48+i<<endl;

    }
     else if((c[3]-48)*10+c[4]-48+i>60 ){
        cout<<c[0]<<c[1]-48+1<<":"<<(c[3]-48)*10+c[4]-48+i-60<<endl;
    }


    }





    }









