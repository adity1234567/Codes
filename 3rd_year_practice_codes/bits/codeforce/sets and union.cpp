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

        int k,a[n],ans=0;
        set<int>s;
        for(int i=0;i<n;i++)
        {
              cin>>k;
              for(int j=0;j<k;j++)
              {
                  cin>>a[j];
                  s.insert(a[j]);
              }
        }

        for(int ex=0;ex<50;ex++)
        {
            set<int>t;

            for(int i=0;i<n;i++)
            {
                bool ok=false;
                for(int j=0;j<k;j++)
                {
                   ok=true;
                   break;
                }


                 if(!ok)
            {
                 for(int j=0;j<k;j++)
                {
                   t.insert(a[j]);
                }
            }
            }

            if(t.size()!=s.size())
            {
                ans=max(ans,(int)t.size());
            }



        }
        cout<<ans<<endl;
    }
}
