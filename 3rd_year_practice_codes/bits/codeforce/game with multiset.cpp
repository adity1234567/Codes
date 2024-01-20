/**
JUST WOW....

47

we have suppose
16-->4
8-->3
4-->2
2-->4
1-->4

1.47/16(taking the max one 16 if we consider 2,4,8,16)=2
2.to check that is there enough 16? we take the min value
 between divided ans and occurrence of 16

and got the answers!!!

**/
#include<bits/stdc++.h>
using namespace std;

#define int long long

main()
{
    int t,n,k;
    map<int,int>mp,val;
    mp[0]=1;
    for(int i=1;i<30;i++)
    {
        mp[i]=mp[i-1]*2;
    }
    cin>>t;

    while(t--)
    {
        cin>>n>>k;
        if(n==1)
        {
           val[mp[k]]++;
        }
        else
        {
            for(int i=30;i>=0;i--)
            {
                if(k>=mp[i]&&k!=0)
                {
                    if(val.count(mp[i]))
                    {
                        k=k-(min(k/mp[i],val[mp[i]])*mp[i]);
                    }
                }
            }

            if(k==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}

