#include <iostream>
using namespace std;
int main()
{
    int n,m,ans=0,s;
    cin>>n>>m;
    int g[n][m];
    char c;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++) 
        {
            cin>>c;
            if(c=='1')
                g[i][j]=1;
            else
                g[i][j]=0;
        }
    }
    int a[n];
    int b[m];
    for(int i=0; i<n; i++) 
    {
        s=0; 
        for(int j=0; j<m; j++) 
        {
            s+=g[i][j];
        }
        a[i]=s;
    }
    for(int j=0; j<m; j++)
    {
        s=0;
        for(int i=0; i<n; i++)
        {
            s+=g[i][j];
        }
        b[j]=s;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(g[i][j]==0)
            {
                if(a[i]==0 && b[j]==0)
                    ans++;
                else if(a[i]==m-1 && b[j]==n-1)
                    ans++;
            }
            else
            {
                if(a[i]==1 && b[j]==1)
                    ans++;
                else if(a[i]==m && b[j]==n)
                    ans++;
            }
        }
    }
    cout<<ans;
}