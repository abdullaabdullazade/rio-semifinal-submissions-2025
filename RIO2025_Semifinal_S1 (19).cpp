#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int r,l;
    cin>>l>>r;
    if (l<10 and r>10)
    {
        for(int i = l;i<10;i++)
        {
            printf("Palindrome!\n");
        }
        for(int i = 10;i<r+1;i++)
        {
            unordered_set<int>b;
            int m = i;
            bool c = false;
            while(m>0)
            {
                b.insert(m%10);
                if(b.size()>1)
                {
                    printf("%d %c",i,'\n');
                    c = true;
                    break;
                }

                m= m / 10;
            }
            if(!c)
            {
               printf("Palindrome!\n");
            }

        }
        }
    else if(l > 10 and r>10)
    {

        for(int i = l;i<r+1;i++)
        {
            unordered_set<int>b;
            int m = i;
            bool c = false;
            while(m>0)
            {
                b.insert(m%10);
                if(b.size()>1)
                {
                    printf("%d %c",i,'\n');
                    c = true;
                    break;
                }

                m= m / 10;
            }
            if(!c)
            {
              printf("Palindrome!\n");
            }
        }
    }
return 0;
    }

