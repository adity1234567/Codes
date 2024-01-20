#include<bits/stdc++.h>
using namespace std;
#define int long long

main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ans=0,cnt=0;

      /**  while(ans!=0)
        {
            n--;
            ans=ans&n;
            cout<<ans<<endl;
           // n--;
            cnt++;
        }
       cout<<cnt<<endl;
       **/

       while(n!=0)
       {
           cnt++;
           n=n>>1;
       }

       cout<<(1<<(cnt-1))-1<<endl;

    }
}

/**
  n=5
  001
  010
  011
  100
  101-5
  110
  111
 1000-8
 1001 9
 1010 10
 1011 11
 1100 12
 1101 13
 1110 14
 1111 15
 10000 16
 10001 17

 10001 17
 01000 8
 00100 4
 00010 2
 00001 1
 ------

 2^4-1

  101
  010/011,100

  101
  010
  001
  ---
  000

  2^2-1=3





**/



