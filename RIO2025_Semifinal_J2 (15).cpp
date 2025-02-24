// Telebe of adicto yani AzeTurk810
// Why i am not a techer (idea by Ayhan007)

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

# define int int64_t
# define ln '\n'
# define fori(n) for(int i = 0 ; i < n ; i++)
# define forj(n) for(int j = 0 ; j < n ; j++)
# define fori1(n) for(int i = 1 ; i <= n; i++);
# define pb push_back
# define vint vector<int>
# define vvint vector<vector<int>>
# define vbl vector<bool>
# define sortv(v) sort(v.begin() , v.end());
# define bend(v) v.begin() , v.end()
# define sorta(a , n) sort(a , a+ n)
# define INFi int(1e9)
# define INFll int(1e18)

int loopcnt = 20;
void ctr()
{
    loopcnt--;
    if(loopcnt<=0)exit(0);
}

namespace coder
{
    void inv(vector<int> &v)
    {
        for(int &i:v)
            cin >> i;
    }
    void outv(vector<int> &v , char c = ' ', char endv = '\n')
    {
        for(int &i : v)
            cout << i << c;
        cout << endv;
    }
    struct BIT
    {
        int N;
        vector<int>t;
        BIT(int _n)
        {
            N = _n;
            t.resize(N , 0);
        }
        void upd(int pos , int val)
        {
            while(pos < N)
            {
                t[pos] += val;
                pos += (pos & (-pos));
            }
        }
        int ask(int l, int r)
        {
//            cout << l << ' ' << r << endl;
            if(l != 1)
            {
                return ask(1 , r) - ask(1 , l - 1);
            }
            int res = 0;
            while(r > 0)
            {
//                cout << r << endl;
                res += t[r];
                r -= (r & (-r));
            }
            return res;
        }
    };

    struct segTree
    {
        vector<int> t;
        int n;
        int nll_val;
        segTree(int _n)
        {
            n = _n;
            t.resize(n * 4);
        }
        void upd(int v , int l , int r , int &pos , int &val)
        {
            if(l == r)
            {
                t[v] += val;
                return;
            }
            int mid = (l + r) >> 1;
            if(mid >= pos)upd((v << 1) , l , mid ,pos,val);
            else upd((v << 1)| 1, mid + 1, r , pos , val);
            t[v] = t[(v << 1)] + t[(v << 1)|1];
        }
        int ask(int v, int l , int  r , int ql , int qr)
        {
            if(ql <= l && r <= qr)
            {
                return t[v];
            }
            if(l > qr || r < ql)
                return nll_val;
            int mid = (l + r) >> 1;
            t[(v << 1)] + t[(v << 1)|1];
        }
    };

    void dfs(int v , vbl &clr , vvint &g)
    {
        clr[v] = true;
        for(int &to:g[v])
        {
            if(!clr[to])
            {
                dfs(to , clr,g);
            }
        }
    }
    void sieve(vector<bool> &is_prime , int up)
    {
        is_prime.assign(up , false);
        is_prime[0] = is_prime[1] = false;
        for(int i =2 ; i < up;i++)
        {
            if(is_prime[i])
            {
                for(int j = i * i ; j < up;j += i)
                    is_prime[j] = false;
            }
        }
    }

    void euler_phi(vector<int>&phi , int up)
    {
        phi.resize(up);
        for(int i = 0 ;i < up;i++)
            phi[i] = i;
        for(int i = 2 ; i< up;i++)
        {
            if(phi[i] == i)
            {
                for(int j = i ; j < up ; j+= i)
                {
//                    cout << i << ' ' << j << endl;
                    phi[j] -= j / i;
                }
            }
        }
    }
    void dijikstra(int start , vint &dist , vector<vector<array<ll,2>>> &g)
    {
        priority_queue<array<ll,2> , vector<array<ll,2>> , greater<array<ll,2>>>pq;
        pq.push({0 , start});
        dist.assign(g.size() , INFi);
        dist[start] = 0;
        while(!pq.empty())
        {
            auto [dst,v] = pq.top();
            pq.pop();
            if(dst != dist[v])
            {
                continue;
            }
            for(auto [to , w] : g[v])
            {
                int cur = dst + w;
                if(cur < dist[to])
                {
                    dist[to] = cur;
                    pq.push({cur , to});
                }
            }
        }
    }
}
//........................................................
// INPUTTTTT!     Secme YASASIN BRUTE FORCE

void solve()
{
    int n;
    cin >> n;
    vint a(n) , b(n);
    coder::inv(a);
    coder::inv(b);
    sortv(a);
    sortv(b);
    int cur = 0 , ans = 1;
    for(int i = n - 1 ; i >= 0 ;i--)
    {
        auto it = lower_bound(bend(a) , b[i]);
        int cnt = max(n - (it - a.begin()) - cur , int(0));
        ans *= cnt;
        cur++;
    }
    cout << ans << '\n';
}

signed main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
//    ifdef ONLINE_COMPLIER
//    freopen("input.txt" , "r" , stdin);
    int t = 1;
    cin >> t;
    for(int cases = 1 ;cases <= t;cases++)
    {
        solve();
    }
}
