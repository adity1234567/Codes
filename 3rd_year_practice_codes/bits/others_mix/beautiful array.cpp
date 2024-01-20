#include<bits/stdc++.h>
using namespace std;
#define int long long

/** SUM OF XOR
-----------------------
5         3            9
0101     0011        1001
5^3=0110
5^9=1100
3^9=1010

SUM=0*(2^0)+2*(2^1)+2*(2^2)+2*(2^3)
    |            |
count of 1       i

   for(int i=0;i<31;i++)
   {
     for(int j=0;j<n;j++)
     {
       if(a[j]&(1<<i)) one++;
        else zero++;

     }

     int p=one*zero;
     ans+=p*(1<<i)
   }
**/
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],ans=0,len=0;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int bit=0;bit<30;bit++)
        {
             int len=0,one=0,zero=0;
            //if(a[i]&(1<<bit))--xor a[i]*(2^bit)=001
            for(int i=0;i<n;i++)
            {
                if((a[i]>>bit)&1)//--and 001*(a[i]/2^bit)
                {
                    len++;
                    ans+=len*(1<<bit);

                }
                else len=0;
            }
        }

        cout<<ans<<endl;
    }

}





