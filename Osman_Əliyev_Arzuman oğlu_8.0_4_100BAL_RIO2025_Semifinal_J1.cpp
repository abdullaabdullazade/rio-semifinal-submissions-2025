#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*
#include<bits/extc++.h>
using namespace __gnu_pbds;
typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>rbt;
*/
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ss int(s.size())
#define sso sort(s.begin(),s.end())
#define vso sort(v.begin(),v.end())
#define pb push_back
#define fi first
#define se second
int main(){
    fast;

    int t;
    cin >> t;

    while (t--) {
        string time;
        int delay;
        cin >> time >> delay;

        int hours = stoi(time.substr(0, 2));
        int minutes = stoi(time.substr(3, 2));

        // Cəmi dəqiqəni hesablamaq
        int total_minutes = hours * 60 + minutes + delay;

        // Yeni saat və dəqiqə hesablamaq
        int new_hours = (total_minutes / 60) % 24;
        int new_minutes = total_minutes % 60;

        // Çıxışı formatlı çap etmək
        cout << setw(2) << setfill('0') << new_hours << ":"
             << setw(2) << setfill('0') << new_minutes << endl;
    }

    return 0;
}

