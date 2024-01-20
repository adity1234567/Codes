///matha kn kaj kore nah???
///ekta na hoile ekta num a 0 thaka lagbe..so nc1*nc1...=n^k

#include<bits/stdc++.h>
using namespace std;
#define int long long

int mod=1e9+7;
int pow1(int n,int k)
{
    if(k==0) return 1;
    int x=pow1(n,k/2);
    x=(x*x)%mod;
    if(k%2==0)
    {
       return x;
    }
    else
    {
        return (x*n)%mod;
    }
}
main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cout<<pow1(n,k)<<endl;
    }
}
