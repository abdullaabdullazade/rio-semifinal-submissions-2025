#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int, int>>v;
    int t;
    cin>>t;
    while(t--){
        int s, d;
        long long n;
        string time;
        cin>>time>>n;
        s = stoi(time.substr(0, 2));
        d = stoi(time.substr(3, 4));
        if(d + n < 60){
            d += n;
        }
        if(d + n >= 60){
            s += (d + n) / 60;
            d = (d + n) % 60;
        }
        if(s >= 24){
            s = s % 24;
        }
        v.push_back({s, d});
    }
    for(auto i : v){
        if(i.first < 10 && i.second < 10){
            cout<<0<<i.first<<':'<<0<<i.second<<endl;
            continue;
        }
        if(i.first < 10){
            cout<<0<<i.first<<':'<<i.second<<endl;
            continue;
        }
        if(i.second < 10){
            cout<<i.first<<':'<<0<<i.second<<endl;
            continue;
        }
    }
}
