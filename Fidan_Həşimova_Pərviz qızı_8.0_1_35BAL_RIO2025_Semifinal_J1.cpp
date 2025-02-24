#include <bits/stdc++.h>
using namespace std;
void func(int s, int d, int g){
    d = d+g;
    if(d>=60){
        s = s+(d/60);
        d = d - (d/60*60);
    }
    if(s >= 24){
        s = 0 + (s-24);
    }
    if(d<=9 && s > 9){
            cout<<s<<":"<<0<<d<<endl;
        }
        else if (d <= 9 && s <= 9){
            cout<<0<<s<<":"<<0<<d<<endl;
        }
        else if(d > 9 && s <= 9){
            cout<<0<<s<<":"<<d<<endl;
        }
        else{
            cout<<s<<":"<<d<<endl;
        }
}

int main()
{
    int n, s, d, g;
    char f;
    cin>>n;
    while(n--){
     cin>>s>>f>>d>>g;
     func(s, d, g);
    }

}
