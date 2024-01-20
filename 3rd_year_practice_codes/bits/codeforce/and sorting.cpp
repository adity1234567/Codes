#include<bits/stdc++.h>
using namespace std;
#define int long long

main()
{
   int t,n;
   cin>>t;
   while(t--)
   {
       cin>>n;
       int a[n],b[n],c=-1;//and fact

       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
         for(int i=0;i<n;i++)
       {
          // cin>>a[i];

           if(a[i]!=i)
           {
               c=c&a[i];
           }
       }

       cout<<c<<endl;

   }
}
