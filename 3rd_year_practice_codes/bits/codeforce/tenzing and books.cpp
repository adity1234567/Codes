#include<bits/stdc++.h>
using namespace std;
#define int long long

/**
1.i can't take any book which has a bit set and that bit is not set int the value of k

   like k=7
           111
we take suppose a number 8,,,bt in 8(1000) there is a set bit which is
not present in the pos of 7..
*To ensure this we use ans|k==k
like 101   but 1001
     111        111
     ---      ------
     111       1111-->ekhane 4ta set bit chole ase ja rule break kore..

**/

int a[4][100010];
main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int select=0,ans=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<n;j++)
            {
              // select=select|a[j][i];

               if((a[i][j]&k)==a[i][j])
               {
                   ans|=a[i][j];
               }
               else break;
            }
        }

        if(k==ans)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
