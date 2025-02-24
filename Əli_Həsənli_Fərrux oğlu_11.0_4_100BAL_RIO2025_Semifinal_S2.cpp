#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>a,vector<int>b,int n)
{
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    int used[n],start=1,ans=1,direction=0;
    for(int i=0;i<n;i++)
        used[i]=0;
    int ind=lower_bound(b.begin(),b.end(),a[0])-b.begin();
    used[ind]=start;
    for(int i=1;i<n;i++)
    {
        ind=lower_bound(b.begin(),b.end(),a[i])-b.begin();
        //cout<<ind<<endl;
        if(ind>0 && used[ind-1]==start && (direction==1 || direction==0))
        {
            used[ind]=start;
            if(direction==0)
                direction=1;
        }
        else if(ind<n-1 && start==used[ind+1] && (direction==-1 || direction==0))
        {
            used[ind]=start;
            if(direction==0)
                direction=-1;
        }
        else
        {
            start++;
            ans++;
            direction=0;
            used[ind]=start;
        }
        //cout<<"X "<<ans<<endl;
    }
    cout<<ans<<endl;
    return;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++)
            cin>>a[i],b[i]=a[i];
        sort(b.begin(),b.end());
        solve(a,b,n);
    }
    return 0;
}
