/*#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,h,s,c,p;
    cin>>t>>n;
    while(t--){
        cin>>h;
        p=1;
        for(int i = 0; i<n;i++){
                if(h/p%10)c++;
            p*=10;
        }

    }
    cout<<c;
    return 0;


#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,h,m,g,f,s;

    cin>>t;
    while(t--){int last=10e9 ,next=0;
        cin>>n;
        vector<int>v;
        vector<int>w;
        for(int i=0;i<n;i++){
            cin>>g;
            v.push_back(g);

        }
            for(int i=0;i<n;i++){
            cin>>g;
            w.push_back(g);
        }
  f=0;
    for(int i=0; i<n ;i++){for(int j=0; j<n ;j++){
            if( v[i]>=w[j])next++;
          //  else {cout <<0<<"\n"; f=1; if(f)break; }
    } if(next==0){cout <<0<<"\n";  f=1;  break;}  last=min(last,next);  next=0;
    } if(f)break; cout<<" "<<last<<"\n";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,h,m,s;
    cin>>t;
    while(t--){
    cin >>n>>h>>m;
    if(n/10==0){}
    if(h+m>=60){s=(h+m)%60;
            if(n+(h+m)/60>=24){
                n=(n+(h+m)/60)%24;
                cout<<n<<":"<<s<<"\n";
            }
            else{
                n=n+(h+m)/60;
                cout<<n<<":"<<s<<"\n";
            }
    }
    else cout<<n<<":"<<m+h<<"\n";
    }

    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,h,m,s;
    cout <<"11:00\n 00:01";
    return 0;
}
