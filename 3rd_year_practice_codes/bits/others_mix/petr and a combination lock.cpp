#include<bits/stdc++.h>
using namespace std;
#define int long long

main()
{
    int n,f=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<(1<<n);i++)
    {
        int ans=0;
        for(int j=0;j<n;j++)
        {
            ///logic boss
            if(i&(1<<j))
            {
                ans+=a[j];
            }
            else
            {
                ans-=a[j];
            }
        }
        if(ans%360==0)
        {
            f=1;
        }
    }

    if(f==1)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

}
