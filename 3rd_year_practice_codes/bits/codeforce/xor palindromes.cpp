/**
       1 0 1 0 1 1
       0 1 2 3 4 5 6

    gd_pairs=2
    bug=2

    i=0 not possible
    i=1
    i=2
     1 0 1 0 1 1
     0 1 0 1 0 0 (xor)
    -------------
     1 1 1 1 1 1 --->possible

     i=3
     1 0 1 0 1 1
     0 1 0 1 0 0 1(xor)
    -------------
     1 1 1 1 1 1 1-->possible...
     2ta bug ar jonno...ekta odd pos ar jonno..total=3

     i=4...5...




**/

#include<bits/stdc++.h>
using namespace std;
#define int long long


main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        vector<char>ans;
        cin>>s;
        int gd_pairs=0,bug=0;
        int l=0,r=n-1;

        while(l<r)
        {
            if(s[l]==s[r])
            {
                gd_pairs+=2;
            }
            else bug++;


            l++;
            r--;
        }

        for(int i=0;i<=n;i++)
        {
            int total=i;
            total-=bug;

            if(total<0)
            {
                ans.push_back('0');
                continue;
            }

            total=max((total%2),total-gd_pairs);//
            total=max((long long)0,total-(n%2));//odd ase naki check



        if(total==0)
        {
            ans.push_back('1');
        }
        else
        {
            ans.push_back('0');
        }
        }
       for(int i=0;i<ans.size();i++)
       {
           cout<<ans[i];
       }
       cout<<endl;
    }
}

