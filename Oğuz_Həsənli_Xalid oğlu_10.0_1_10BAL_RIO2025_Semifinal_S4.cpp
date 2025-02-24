#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    if(n==2){
        vector<long long>l(k);
        vector<long long>l1(k);
        for(int i=0;i<k;i++){
            cin>>l[i];
        }

        for(int i=0;i<k;i++){
            cin>>l1[i];
        }

        sort(l.begin(),l.end());
        sort(l1.begin(),l1.end());
        long long en_kicik=1000000000000000;
        for(int i=0;i<k;i++){
            for(int j=0;j<k;j++){
                if(l[i]<=l1[j]){
                    en_kicik=min(en_kicik,abs(l[i]-l1[j]));
                    break;
                }
                else{
                    en_kicik=min(en_kicik,abs(l[i]-l1[j]));
                }
            }
        }

        cout<<en_kicik;
    }

}
