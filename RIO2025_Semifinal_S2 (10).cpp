#include <bits/stdc++.h>




#define all(v) v.begin() v.end()
#define pb push_back
#define ep emplace_back


#define lanadelrey cout.tie(0); cin.tie(0); ios_base::sync_with_stdio();

//RIO2025_10165
//no ex no next mirrehim is the best
using namespace std;


//typedef tree<int,nullptr,less<int>,tree_order_statistics_node_update,rb_tree_tag> indexed_set;


/*
for _ in range(int(input())):
    a=int(input())
    b=list(input().split())
    if sorted(b,reverse=True)==b or  sorted(b,reverse=False)==b:
        print(1)
        continue
    res=0
    c=sorted(b)
    first=0
    p=""
    joined_b = "".join(b)
    for i in range(a):
        za  = "".join(c[first:i+1])

        """
        0 0
        3
        3 6
        3 6
        7
        """
        if za in joined_b or za[::-1] in joined_b:
            p+=c[i]
        else:
            res+=1
            first=i
            p=c[i]
    if p:
        res+=1
            #print(first)

    print(res)


*/


bool check_part(string n,string t){
    for(int i=0;i<n.size();i++){
        int num = t.size()-i;
        if(num<0)num*=-1;
        string part = n.substr(i,t.size());
        //cout<<part<<endl;
        if(part==t){
            return true;
        }
    }
    return false;

}

void mal()
{
    int  n;cin>>n;
    string b="";
    vector<int> v(n);
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        b+=a;

    }
    string sorted_b=b;
    sort(sorted_b.begin(),sorted_b.begin()+n);


    string reverse_sorted_b = "";
    for(int i=n-1;i>=0;i--)reverse_sorted_b+=sorted_b[i];
    if(sorted_b==b or reverse_sorted_b==b){
        cout<<1<<endl;
        return;
    }
    int res=0;
    int begin_ = 0;
    string currentstring="";
    for(int i=0;i<n;i++){
        string za = sorted_b.substr(begin_,i-begin_+1);
        string reverse_za="";
        for(int i=za.size()-1;i>=0;i--)reverse_za+=za[i];



        //cout<<za<<"   "<<b<<"  "<<reverse_sorted_b<<"  "<<check_part(b,za)<<"   "<<check_part(b,reverse_sorted_b)<<"  reversed "<<reverse_za<<endl;

        if(check_part(b,za) or check_part(b,reverse_za)){
                currentstring+=sorted_b[i];
        }else{
            res++;
            //cout<<"wtf"<<endl;
            begin_ = i;
            currentstring=sorted_b[i];
        }


    }
    if(currentstring.size()){
        res++;
    }
    cout<<res<<endl;







}



int main(){

    lanadelrey;
    int t=1;
    cin>>t;

    while(t--)mal();
    /*
    5
7 3 6 9 8
3   73698  98763  0   0  reversed 3
wtf
6   73698  98763  0   0  reversed 6
wtf
7   73698  98763  1   0  reversed 7
78   73698  98763  0   0  reversed 87
wtf
9   73698  98763  0   0  reversed 9
wtf
5
    */
    //string a="abdulla";
    //cout<<check_part("73698","367")<<endl;
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
