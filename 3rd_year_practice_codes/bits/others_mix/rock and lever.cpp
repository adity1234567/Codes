#include<bits/stdc++.h>
using namespace std;
#define int long long


int MSB(int n)
{
  if(n==0) return 0;

  int msb=0;
  n=n>>1;
   while(n!=0)
   {
       n=n>>1;
       msb++;
   }
   return msb;
}
main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        /**
            msb
        001--0
        100--2
        011--1
        111--2
       1010--3

        **/

        map<int,vector<int>>mp;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            int msb=MSB(a[i]);
           // cout<<msb<<endl;
            mp[msb].push_back(i);
        }


        int sum=0;
        for(auto x:mp)
        {
           // cout<<x.first<<" "<<x.second.size()<<endl;
            int sz=x.second.size();

            sum+=(sz*(sz-1))/2;
        }

        cout<<sum<<endl;
    }

}
