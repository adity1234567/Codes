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
        int a[n];
        int xr=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
         for(int i=0;i<n;i++)
        {
            xr=xr^a[i];
        }

        if(xr==0) cout<<0<<endl;
        else{
            if(n%2==0)
            {
                cout<<-1<<endl;
            }
            else cout<<xr<<endl;
        }

       // cout<<xr<<endl;
    }
}
