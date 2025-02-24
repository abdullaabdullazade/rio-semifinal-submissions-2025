#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int r,l;
    cin>>l>>r;
    for(int i = l;i<r+1;i++)
    {
        if(i<10)
        {
            printf("Palindrome!\n");
        }
        else
        {
            vector<int> a;
            int m = i;
            bool c = false;
            while(m>0)
            {
                if(a.size()>0 and a[0] != m%10)
                {
                    c = true;
                    break;
                }
                a.push_back(m%10);
                m= m / 10;
            }
            if(c)
            {
                printf("%d %c",i,'\n');
            }
            else
            {
                printf("Palindrome!\n");
            }
        }
    }
    return 0;
}
