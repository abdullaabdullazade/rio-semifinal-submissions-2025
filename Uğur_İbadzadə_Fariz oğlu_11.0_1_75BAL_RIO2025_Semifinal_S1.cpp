#include<bits/stdc++.h>

using namespace std;

/*int phi(int n){
    int res=n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            res-=res/i;
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n>1){
        res-=res/n;
    }
    return res;
}
phi1ton(int n){
    vector<int>phii;
    for(int i=0;i<=n;i++){
        phii.push_back(i);
    }
    for(int i=2;i<=n;i++){
        if(phii[i]==i){
            for(int j=i;j<=n;j+=i){
                phii[j]-=phii[j]/i;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<phii[i]<<' ';
    }
}
vector<int>prime(10000,0);

void sieve(int n){
    prime[0]=1;
    prime[1]=1;
    for(int i=2;i*i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
}
*/
int main(){
    long long l,r;
    cin>>l>>r;
    for(int i=l;i<=r;i++){
        int ic=i;
        int n=0;
        while(ic!=0){
            n=n*10+ic%10;
            ic/=10;
        }
        if(n==i){
            cout<<"Palindrome! \n";
        }else{
            cout<<i<<"\n";
        }
    }



    return 0;
}
