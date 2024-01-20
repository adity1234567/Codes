#include<bits/stdc++.h>
using namespace std;
#define int long long


int countOne(int n)
{
    int cnt=0;
    while(n!=0)
    {
        n=n&(n-1);
        cnt++;
    }

    return cnt;
}
main()
{
    int n,k,t,m;
    cin>>n>>m>>k;
    int a[m+1],cnt=0,ans=0;
    for(int i=0;i<m+1;i++)
    {
        cin>>a[i];
    }

     for(int i=0;i<m;i++)
     {
        ///we are going to take xor because if we got 1 and 1..thn there
        ///would be even no diff...
        cnt=a[i]^a[m];
        if(countOne(cnt)<=k)
        {
            ans++;
        }

     }

     cout<<ans<<endl;


}
