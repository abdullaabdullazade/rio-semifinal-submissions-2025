#include<bits/stdc++.h>
#define AI ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;//11:20 cry :((((((((((
void solve()
{
    ll n,i,j,s=0;
    cin>>n;
    ll a[n],b[n];
    vector<pair<ll,ll>>v;
    map<ll,bool>mp;
    map<ll,queue<ll>>mp2;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        b[i]=abs(a[i]-a[(i+1)%n]),s+=b[i];
        v.push_back({b[i],i+1});
    }
    if(s%2)
    {
        cout<<-1<<endl;
        return;
    }
    sort(b,b+n);
    sort(v.begin(),v.end());
    set<ll>st1,st2;
    mp[b[0]]=1;
    mp2[b[0]].push(1);
    st1.insert(b[0]);
    for(i=1;i<n;i++)
    {
        if(mp[b[i]]==0)
        {
            mp2[b[i]].push(i+1);
            mp[b[i]]=1;
            st2.insert(b[i]);
        }
        for(auto x:st1)
        {
            if(mp[x+b[i]]==0)
            {
                mp2[x+b[i]]=mp2[x];
                mp2[x+b[i]].push(i+1);
                mp[x+b[i]]=1;
                st2.insert(x+b[i]);
            }
        }
        while(st2.size()>0)
        {
            st1.insert(*st2.begin());
            st2.erase(st2.begin());
        }
        if(mp[s/2])
        break;
    }
    if(!mp[s/2])
    {
        cout<<-1;
        return;
    }
    cout<<mp2[s/2].size()<<endl;
    while(!mp2[s/2].empty())
    {
        cout<<v[mp2[s/2].front()-1].second<<' ';
        mp2[s/2].pop();
    }
    cout<<endl;
}
int main()
{
    AI
    ll t;
    cin>>t;
    while(t--)
    solve();
}
