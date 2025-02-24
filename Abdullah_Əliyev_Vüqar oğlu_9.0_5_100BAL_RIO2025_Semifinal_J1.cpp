/***********************************
██╗░░██╗████████╗██╗░░░░░███╗░░░███╗
██║░░██║╚══██╔══╝██║░░░░░████╗░████║
███████║░░░██║░░░██║░░░░░██╔████╔██║
██╔══██║░░░██║░░░██║░░░░░██║╚██╔╝██║
██║░░██║░░░██║░░░███████╗██║░╚═╝░██║
╚═╝░░╚═╝░░░╚═╝░░░╚══════╝╚═╝░░░░░╚═╝
***********************************/

//#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <unistd.h>

//#include "functions.h"

#define int l
#define f first
#define s second
#define endl '\n'
#define l long long
#define ara <<" "<<
#define pb push_back
#define vi vector<l>
#define pairs pair<l,l>
#define mii map<l,l>
#define vpii vector<pairs>
#define out(v) cout<<v.size()<<endl;for(l e : v){   cout<<e+1<<" "; } cout<<endl;
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define all(v) v.begin(),v.end()
#define yesno(v) ((v) ? "YES" : "NO")
#define dbg(x) cout<<#x<<" = "<<x<<endl;
#define filereader() ifstream cin(input);
#define fileprinter() ofstream cout(output);
#define fast ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int> , rb_tree_tag, tree_order_statistics_node_update> less_indexed_set;
typedef tree<int, null_type, greater<int> , rb_tree_tag, tree_order_statistics_node_update> greater_indexed_set;
typedef long double ld;

const l N = 2e5 + 5;
const l INF = 1e12;
const l mod = 1e9 + 7;


const string  input =  "input.txt";
const string output = "output.txt";

l getnum(){
    char c1,c2;

    l n = 0;

    cin>>c1>>c2;

    n = (c1 - '0') * 10 + c2 - '0';
    return n;
}

void solve(){
    l t1 = getnum();
    char temp;cin>>temp;
    l t2 = getnum();

    l del;cin>>del;


    t2 += del;

    t1 = (t1 + t2 / 60)%24;
    t2 %= 60;

    string s1 = to_string(t1);
    string s2 = to_string(t2);

    if(s1.size() == 1){
        s1 = "0" + s1;
    }
    if(s2.size() == 1){
        s2 = "0" + s2;
    }

    cout<<s1<<":"<<s2<<endl;

}


signed main(){
    fast;

    l nt = 1;
    cin>>nt;

    for(int i = 1; i <= nt; i++){
        solve();
    }

}
