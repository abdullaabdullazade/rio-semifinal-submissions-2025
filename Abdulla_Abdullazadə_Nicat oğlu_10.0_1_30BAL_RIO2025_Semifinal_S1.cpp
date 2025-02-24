#include <bits/stdc++.h>


#define int long long


#define all(v) v.begin() v.end()
#define pb push_back
#define ep emplace_back


#define lanadelrey cout.tie(0); cin.tie(0); ios_base::sync_with_stdio();

//RIO2025_10165
//no ex no next mirrehim is the best
using namespace std;


//typedef tree<int,nullptr,less<int>,tree_order_statistics_node_update,rb_tree_tag> indexed_set;


void mal()
{
    int l,r;cin>>l>>r;
    for(int i=l;i<=r;i++){
        set<int> s;
        for(auto &i:to_string(i)){
            s.insert(i);
        }

        if(i<10 or s.size()==1){
            cout<<"Palindrome!"<<endl;
        }else{
        cout<<i<<endl;}
    }


}



signed main(){

    lanadelrey;
    int t=1;
    //cin>>t;
    while(t--)mal();
}


/*








Mellim eger gorurusunuse bu qeder adamin recordingi en azi 200mb tutsa

200*6000=1200000mb

bu qeder datani nece saxlayirsiz>>>














momentlerimi yaziram bruhhh

demeli oturmusuq Eliyyiekber menim yanimdadir
//hkkmnnGjH

Mirrehim bizle deyil teesuf ki

Yasamaga calisiriq

hec ne vecimize deyil

heyatdayiq az qalib baslamaga

hec ne deyeceklerim bu qeder byeeeee

Resad ve Baris mellime salam deyirem

Salam Aleykum
Allah sizi qorusun



*/
