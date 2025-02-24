#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  for(int i=0; i<t; i++) {
      string s;
      int g;
      cin>>s>>g;
      string ss;
      ss+=s[0];
      ss+=s[1];
      string sd;
      sd+=s[3];
      sd+=s[4];
      int S,D;
      S=stoi(ss);
      D=stoi(sd);
      int time=S*60+D+g;
      if(time>=24*60) {
        time-=24*60;
      }
      int s1,d1;
      s1=time/60;
      d1=time-s1*60;
      if(s1<10 && d1<10){
        cout<<"0"<<s1<<":0"<<d1<<'\n';
      }
      else if( d1<10){
        cout<<s1<<":0"<<d1<<'\n';
      }
      else if(s1<10){
        cout<<"0"<<s1<<":"<<d1<<'\n';
      }
    }
}
