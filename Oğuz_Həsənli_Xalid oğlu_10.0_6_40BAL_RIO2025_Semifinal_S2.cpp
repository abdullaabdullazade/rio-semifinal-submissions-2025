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
        map<int,bool>m;
        for(int i=0;i<n;i++){
            if(m[l[i]]==true) continue;
            if(i!=n-1 && abs(l[i]-l[i+1])==1){
                for(int k=i;k<n-1;k++){
                    if(abs(l[k]-l[k+1])==1){
                        m[l[k]]=true;
                        m[l[k+1]]=true;
                    }
                else break;
                }
                cvb++;
            }
            else{
                m[l[i]]=true;
                cvb++;

            }
        }

        cout<<cvb<<endl;


    }


}
