#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;

        int cnt=0;
        while(n>0)
        {
           cnt+=(n&1);
           n=n>>1;
        }

        if(cnt%2==0) cout<<"ok"<<endl;

    }
}
