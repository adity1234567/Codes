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
        int a[n],pre[n+5],ans=0;

        pre[0]=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }

        for(int i=1;i<=n;i++)
        {
            pre[i]=pre[i-1]^a[i];
        }

        for(int i=1;i<n;i++)
        {
            int a=pre[i];
            int b=pre[n]^pre[i];/// i+1 to n

            if(a==b)
            {
                ans=1;
                break;
            }
        }

        for(int i=1;i<n-1;i++)
        {
            int a=pre[i];
            for(int j=i+1;j<n;j++)
            {
                int b=pre[j]^pre[i];
                int c=pre[n]^pre[j];

                if(a==b&&b==c)
                {
                    ans=1;
                    break;
                }
            }
        }

        if(ans==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
