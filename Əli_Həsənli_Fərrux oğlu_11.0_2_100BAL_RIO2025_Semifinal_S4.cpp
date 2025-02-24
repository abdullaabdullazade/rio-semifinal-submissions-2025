#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<long long>v[n];
    vector<pair<long long,int>>p;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            int x;
            cin>>x;
             v[i].push_back(x);
            p.push_back({x,i});
        }
        sort(v[i].begin(),v[i].end());
    }
    sort(p.begin(),p.end());
    long long ans=1000000000000000000;
    int used[n+1], non=n-1;
    for(int i=0;i<=n;i++)
        used[i]=0;
    int l=0,r=0;
    used[p[0].second]++;
    //for(auto i:p)
      //  cout<<i.first<<" ";
    while(l<p.size())
    {
        if(non>0)
        {
            if(r<p.size())
            {
                r++;
                if(!used[p[r].second])
                    non--;
                used[p[r].second]++;
            }
            else
            {
                cout<<ans;
                return 0;
            }
        }
        else
        {
            //cout<<ans<<" "<<l<<" "<<r<<endl;
            ans=min(ans,abs(p[r].first-p[l].first));
            used[p[l].second]--;
            if(!used[p[l].second])
                non++;
            l++;
            //cout<<"non "<<non<<endl;
        }
    }
    cout<<ans;
    return 0;
}
//1, ,3, , ,
