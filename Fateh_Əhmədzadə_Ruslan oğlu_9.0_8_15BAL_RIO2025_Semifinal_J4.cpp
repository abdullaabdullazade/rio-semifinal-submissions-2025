// Telebe of adicto yani AzeTurk810
// Why i am not a teacher?  ?(idea from Ayxan007)
#include <bits/stdc++.h>

using namespace std;
using ll= int64_t;
using ull=unsigned int64_t;

# define mpll map<ll,ll>
# define umpll unordered_map<ll,ll>
# define vv vector<vector
# define vint vector<int>
# define vull vector<unsigned long long>
# define sint set<int>
# define vpri vector<pair<int,int>>
# define vll vector<long long>
# define vbl vector<bool>
# define vvint vector<vector<int>>
# define vvll vector<vector<long long>>

/* Other defines*/
# define qint queue<int>

//# define endl '\n'
# define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
# define range(a,b,c) for(int i=a;i<b;i+=c)
# define ranger(a,b,c) for(int r=a;r<b;r+=c)
# define arange(a,b,c) for(int i=a;i>b;i-=c)
# define bend(x) (x).begin(),(x).end()
# define pb push_back
# define sortv(v) sort((v).begin() , (v).end());
# define fori(x) for(int i=0;i<x;i++)
# define forj(y) for(int j=0;j<y;j++)
# define fori1(x) for(int i=1;i<=x;i++)
# define forj1(y) for(int j=1;j<=y;j++)
# define forn(x,c) for(int i=0;i<n;i+=c)
# define ff first
# define ss second
# define INFi 1e9
# define INFll 1e18
# define printfprs(v) for(int alma = 0;alma<(v).size();alma++){cout<<(v)[alma].ff<< ' '<<(v)[alma].ss<<endl;};
# define printfv(v) {for(int alol = 0 ; alol < (v).size() ; alol++){cout<<(v)[alol]<<' ';}cout << endl;}
# define ln '\n'
//# define T int_fast32_t
# define int ll

int loopcnt = 6;
void ctr()
{
    loopcnt--;
    if(loopcnt <= 0)exit(0);
}

const int antiminus =1e6 + 10;

namespace coder
{
    namespace Trees
    {
        struct segmentTree
        {
            int N , Null_val = 0;
            vint t;
            segmentTree(int _n)
            {
                t.resize(_n * 4);
                N = _n;
            }
            void build(int v , int l , int r , vint &a)
            {
                if(l == r)
                {
                    t[v] = a[l];
                    return;
                }
                int mid = (l + r) >> 1;
                build((v << 1) , l , mid , a);
                build((v << 1)|1 , mid + 1 , r , a);
                t[v] = (t[(v << 1)] ^ t[(v << 1)|1]);
            }
            void upd(int v , int l , int r  , int &val , int &pos)
            {
                if(l == r)
                {
                    t[v] = val;
                    return;
                }
                int mid = (l + r) >> 1;
                if(mid >= pos)upd((v << 1) , l , mid , val,pos);
                else upd((v << 1)|1 , mid + 1 , r , val , pos);
                t[v] = (t[(v << 1)] ^ t[(v << 1)|1]);
            }
            int ask(int v , int l , int r ,int ql , int qr)
            {
                if(ql <= l && r <= qr)
                {
                    return t[v];
                }
                if(ql > r || l > qr)return Null_val;
                int mid = (l + r) >> 1;
                return      (
                            ask((v << 1) , l , mid ,ql , qr)
                             ^
                            ask((v << 1)|1 , mid + 1 , r ,ql , qr)
                            );
            }

        };
        struct BIT
        {
            ll ferq = 0;
            vector<ll>tree;
            int N;
            BIT(int _n)
            {
                N = _n - 1;
                tree.resize(_n , 0);
            }
            void update(int pos, int val)
            {
                while(pos <= N)
                {
                    tree[pos]+=val;
                    pos += (pos &(-pos));
                }
            }
            ll query(int l , int r)
            {
                if(l != 1)
                {
                    return query(1 , r) - query(1 , l - 1);
                }
                ll res = 0;
                while(r > 0)
                {
                    res += tree[r];
                    r -= (r & (-r));
                }
                return res;
            }
        };
        struct sparseTable
        {
            int N , Null_val , k;
            vvint table;
            vint mnl;
            sparseTable(int _n , int Infval)
            {
                N = _n;
                Null_val = Infval;
                k = log2(N);
                mnl.resize(N + 1 , 0);
                table.resize(k + 1, vint(N , Infval));
            }
            void build(vint &a)
            {
                mnl[1] = 0;
                for(int i=2;i<=N;i++)
                    mnl[i] = mnl[i>>1 ]+ 1;
                for(int i = 0 ; i < N ; i++)
                {
                    table[0][i] = a[i];
                }
                for(int i = 1 ;i <= k ; i++)
                {
                    for(int j = 0 ; (1 << i) + j <= N ; j++)
                    {
//                        cout << i << ' ' << j << ln;
                        table[i][j] = min(table[i - 1][j],table[i - 1][j + (1<<(i - 1))]);
                    }
                }
            }
            int ask_min(int l , int r)
            {
                int idk = mnl[r - l + 1];
                l--;r--;
//                cout << l << ' ' << r <<  ' ' << idk << ' ' << k << ' ' << table[idk][l] << ' ' <<  table[idk][r - (1<<idk) + 1] << ' ' <<  min(table[idk][l],table[idk][r - (1<<idk) + 1]) << ' '  ;
                return min(table[idk][l],table[idk][r - (1<<idk) + 1]);
            }
        };
    };
    namespace Graph
    {
        void dfs(int v,vint &used , vvint &g)
        {
            used[v] = true;
            for(int &to : g[v])
            {
                if(!used[to])
                    dfs(to, used , g);
            }
        }
        struct graph
        {
            int N;
            graph(int _n)
            {
                N = _n;
            }
        };
    };
    void outv(vint &v, char c = ' ',char endv ='\n')
    {
        for(int &i : v)
            cout << i << c;
        cout << endv;
    }
    void inv(vector<int> &v)
    {
        for(int &i: v)
        {
            cin >> i;
        }
    }
    void inprv(vpri &v)
    {
        for(pair<int,int> &i : v)
        {
            cin >> i.first >> i.second;
        }
    }
    void put(bool ol , char endv = '\n')
    {
        if(ol)
            cout << "Yes" << endv;
        else
            cout << "No" << endv;
    }
    void Put(bool ol , char endv = '\n')
    {
        if(ol)
            cout << "YES" << endv;
        else
            cout << "NO" << endv;
    }
    namespace Mod
    {
        int Mod = 1;
        int mult(int a , int b)
        {
            return (a % Mod * (b % Mod))%Mod;
        }
        int binpow(int a , int b)
        {
            int res = 1;
            while(b)
            {
                if(b & 1)res = mult(a , res);
                a = mult(a , a);
                b>>=1;
            }
            return res;
        }
    }
    int edediort(int a , int b)
    {
        return ((a + b) >> 1);
    }
};

using namespace coder;
// .............................................................................................................

const int MOD = 998244353;
vint v;
int t,n , m , s , ans = 0 , mini = INFi,cnt = 0 , indexmini = -1;
int marge(int l,int r)
{
    // cout << l << ' '<<r << endl;
    int mid=(l+r)/2;
    int sizel=mid-l+1;
    int sizer=r-mid;
    // cout << sizel <<  '|' << sizer <<endl;cout<<"S"<<endl;
    vint L(sizel),R(sizer);
    // cout<<1;
    for(int i=l;i<=mid;i++)
        {L[i-l]=v[i];}

    for(int i=mid+1;i<=r;i++)
    {
        R[i-mid-1]=v[i];
    }
    int inv=0;
    int i=0,j=0;
    for(int y=l;y<=r;y++)
    {
        if(j == sizer && i!=sizel)
        {
            v[y]=L[i++];
        }
        else if(i == sizel && j != sizer) v[y]=R[j++];
        else if(L[i]<=R[j]) v[y]=L[i++];
        else
        {
            inv+=sizel - i;
            v[y]=R[j++];
        }
    }
    return inv;
}

int margesort(int l,int r)
{
// cout << l<< ' ' <<r << endl;
    int mid=(l+r)/2;
    if(l<r)
    {
        int invl,invr;
        invl=margesort(l,mid);
        invr=margesort(mid+1,r);
        return invl + invr + marge(l,r);
    }
    else
    return 0;
}

bool solve()
{
    cin >> n;
    v.resize(n);
    inv(v);
    bool ok = false;
    int ans = margesort(0 , n - 1);
    fori(n - 1)
    {
        if(v[i] == v[i + 1])
        {
            ok = true;
        }
    }
//    cout << ans << ln;
    if(ans %2 == 0 || ok)
        put(1);
    else
        put(0);
    return true;
}
signed main()

{
    fastio;
    int t = 1;
    cin >> t;
//    #ifndef ONLINE_JUDGE
//        freopen("input.txt", "r", stdin);
//    #endif
    for(int  cases = 1 ; cases<=t && solve();cases++)
    {
//        solve();
    }
    return 0;
}
