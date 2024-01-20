#include<bits/stdc++.h>
using namespace std;
#define int long long

main()
{
   int t,n,k;
   cin>>t;
   while(t--)
   {
       cin>>n>>k;
       int a[n],b[k];
       int xor1=0,or1=0,xor2=0;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(int i=0;i<k;i++)
       {
           cin>>b[i];
           or1|=b[i];
       }


        for(int i=0;i<n;i++)
       {
           xor1^=a[i];
           xor2^=(a[i]|or1);
       }

       cout<<min(xor1,xor2)<<" "<<max(xor1,xor2)<<endl;
   }
}

