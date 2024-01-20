#include<bits/stdc++.h>
using namespace std;
#define int long long


main()
{
   int a,b;
   cin>>a>>b;

   if(a==b)
   {
       cout<<0<<endl;
   }
   else
   {
       int ans=0;

       ///This expression is often used in bit manipulation to get a bitmask
       /// with the most significant bit set in the XOR result of l and r.
       ans=((int)1)<<(64-__builtin_clzll(a^b));

       /**
         x=1;
          while(x<=a^b)
          {
           x=x<<1;
          }
       **/

       cout<<ans-1<<endl;

   }
}
