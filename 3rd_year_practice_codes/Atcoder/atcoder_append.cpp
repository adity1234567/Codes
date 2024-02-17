#include<bits/stdc++.h>
using namespace std;
#define int long long

main()
{
    int t,n,k;
    cin>>t;
     vector<int>v;
    while(t--)
    {
        cin>>n>>k;

        if(n==1)
        {
            v.push_back(k);

        }

        else if(n==2)
        {
            cout<<v[v.size()-k]<<endl;
                //20 30 40
        }

    }
}
