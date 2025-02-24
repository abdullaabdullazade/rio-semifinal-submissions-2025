#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<long, long>> sub;
vector<pair<long, long>> mas;
long n;
long s;
vector<pair<long, long>> ans;
void sf(long i){
    if (i==n){
        long hs=0;
        for (long l=0;l<sub.size(); l++){
            hs+=sub[l].first;
        }
        if (hs==s/2) ans=sub;
        return;
    }
    if (ans.size()!=0) return;
    sf(i+1);
    sub.push_back(mas[i]);
    sf(i+1);
    sub.pop_back();
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long t; cin >> t;
    for (long i=0; i<t; i++){
        
        cin >> n;
        s=0;
        ans.erase(ans.begin(),ans.end());
        sub.erase(sub.begin(),sub.end());
        mas.erase(mas.begin(),mas.end());
        long min;
        long max;
        long a;
        for (long j=0; j<n; j++){
            long a; cin >> a;
            
            if (j==0) min=a;
            else if (j==n-1) max=a;
            mas.push_back({a,j});
            if (j!=0){
                mas[j-1].first=abs(mas[j-1].first-mas[j].first);
            }
        }
        mas[n-1].first=abs(max-min);
        for (long j=0; j<n; j++){
            s+=mas[j].first;
        }
        
        sf(0);
        if (ans.size()==0){
            cout << -1 << '\n';
            continue;
        }
        cout << ans.size() << '\n';
        for (auto pr : ans){
            cout << pr.second+1 << ' ';
        }
        cout << '\n';
    }
    
} 


