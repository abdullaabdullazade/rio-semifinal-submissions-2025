#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

bool f(vector<int> v)
{
    vector<int> ff;
    for(int i=0; i<v.size(); i++)
    {
        ff.push_back(v[i]);
    }
    sort(v.begin(), v.end());
    if(ff==v)
    {
        return true;
    }
    return false;

}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(auto& x : v)
        {
            cin>>x;
        }
        for(int i = 0; i<3; i++)
        {


            if(f(v))
            {
                cout<<"Yes"<<endl;
                break;
            }
            swap(v[0],v[1]);
            swap(v[0],v[2]);
        }
        if(f(v)==0){
            cout<<"No"<<endl;
        }



    }
}
