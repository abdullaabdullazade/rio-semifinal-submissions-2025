#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--) {
        int n;
        cin>>n;
        n=3;
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        int a0[3];a0[0]=a[0];a0[1]=a[1];a0[2]=a[2];
        sort(a,a+3);
        bool is=false;
        for(int i=0;i<3;i++) {
            int x,y,z;
            x=a[0];y=a[1];z=a[2];
            a[0]=z;
            a[1]=x;
            a[2]=y;
            if(a[0]==a0[0]&&a[1]==a0[1]&&a[2]==a0[2]) {
                is=true;
                break;
            }
        }
        if(is) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
	}
    return 0;
}
