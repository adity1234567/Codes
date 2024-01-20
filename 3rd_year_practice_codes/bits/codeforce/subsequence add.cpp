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
        int a[n],f=1,sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);

        if(a[0]!=1)
        {
           f=0;
        }
        sum=a[0];
        for(int i=1;i<n;i++)
        {
           if(sum<a[i])
           {
             f=0;
           }
           sum+=a[i];
        }

        if(f==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
