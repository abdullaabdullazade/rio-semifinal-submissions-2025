#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--) {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        bool is=true;
        for(int i=0;i<=n-3;i+=3) {
            if((a[i]<a[i+1]&&a[i]<a[i+2]&&a[i+1]>a[i+2])||(a[i]>a[i+1]&&a[i]<a[i+2]&&a[i+1]<a[i+2])||(a[i]>a[i+1]&&a[i]>a[i+2]&&a[i+1]>a[i+2])) {
                is=false;
                break;
            }
        }
        if(is) cout<<"Yes"<<endl;
        if(!is) cout<<"No"<<endl;
	}
    return 0;
}
