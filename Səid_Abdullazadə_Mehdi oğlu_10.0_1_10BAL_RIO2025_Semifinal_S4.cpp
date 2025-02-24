#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
int main(){
    int t;
    t=1;
    while(t--){
        int a,b;
        cin>>a>>b;
        int aa[b],bb[b],la=0,lb=0;
        for(int i=0;i<b;i++){
            cin>>aa[i];
        }
        for(int i=0;i<b;i++){
            cin>>bb[i];
        }
        sort(aa,aa+b);
        sort(bb,bb+b);
        int mini=INT_MAX;
        while(la<b and lb<b){
            mini=min(abs(aa[la]-bb[lb]),mini);
            if(mini==0){
                cout<<la<<' '<<lb;
            }
            if(aa[la]<bb[lb]){
                la++;
                if(la==b){
                    break;
                }
            }
            else{
                lb++;
                if(lb==b){
                    break;
                }
            }
        }
        cout<<mini<<endl;
    }
}
//1 2 8
//4 5 7




