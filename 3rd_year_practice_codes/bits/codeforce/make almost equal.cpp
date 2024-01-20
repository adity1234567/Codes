#include<bits/stdc++.h>
using namespace std;
#define int long long


main()
{
    int k,n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],k=2;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

      while(1)
       {
         set<int>s;
        for(int i=0;i<n;i++)
        {
            s.insert(a[i]%k);
        }


        if(s.size()==2)
        {
            cout<<k<<endl;
            break;
        }
        else
        {
            k=2*k;
        }
      }
    }

}
