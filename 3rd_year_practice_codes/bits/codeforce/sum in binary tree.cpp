#include<bits/stdc++.h>
using namespace std;
#define int long long

main()
{
    int t,n,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;

          while(n!=0)
          {
              sum+=n;
              n=n>>1;
          }

          cout<<sum<<endl;


    }
}
