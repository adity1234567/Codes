#include<bits/stdc++.h>
using namespace std;
#define int long long

main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int ans=-1;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=0;i<n;i++)
        {
            ans=ans&a[i];
        }

        cout<<ans<<endl;
    }
}
