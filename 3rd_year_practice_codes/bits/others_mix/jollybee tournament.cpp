#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        long long int a[k],cnt=0;
        vector<long long int>v(1<<n,0);

        for(int i=0;i<k;i++)
        {
            cin>>a[i];
            v[a[i]-1]=1;
        }

        while(v.size()>1)
        {
            vector<long long int>t;
            for(int i=0;i<v.size();i+=2)
            {
                if(v[i]==0&&v[i+1]==0)
                {
                    t.push_back(0);
                }
                else if(v[i]==1&&v[i+1]==1)
                {
                    t.push_back(1);
                }
                else
                {
                    t.push_back(0);
                    cnt++;
                }

            }
            v=t;
        }
        cout<<cnt<<endl;
    }
}
