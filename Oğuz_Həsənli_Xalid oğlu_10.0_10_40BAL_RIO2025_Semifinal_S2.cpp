#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>l(n);
        for(int i=0;i<n;i++){
            cin>>l[i];
        }

        int cvb=0;
        vector<bool>m(n,false);
        for(int i=0;i<n;i++){
            if(m[i]==true){continue;}
            if(abs(l[i]-l[i+1])==1){
                for(int k=i;k<n-1;k++){
                    if(abs(l[k]-l[k+1])==1){
                        m[k]=true;
                        m[k+1]=true;
                    }
                    else{break;}
                }
                cvb++;
            }
            else{
                m[i]=true;
                cvb++;

            }
        }

        cout<<cvb<<endl;


    }


}
