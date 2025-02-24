#include <bits/stdc++.h>
using namespace std;
bool ss(vector<int> vt){
    for(int i=0;i<vt.size()-1;i++){
        if(vt[i]>vt[i+1]){
            return false;
        }
    }
    return true;
}
bool s(vector<int> vt){
    for(int i=0;i<vt.size()-1;i++){
        if(vt[i]<vt[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vt(n);
        for(int i=0;i<n;i++){
            cin>>vt[i];
        }
        if(ss(vt)||s(vt)){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }

    }

}
