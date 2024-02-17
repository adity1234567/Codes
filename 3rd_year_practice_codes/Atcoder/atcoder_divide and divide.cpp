#include <bits/stdc++.h>
using namespace std;
#define int long long int

const int MAXN = 1e7 + 5;

/**
int dp[MAXN];

int check(int n) {
    if (n<2) return 0;
    if (dp[n]!=0) return dp[n];
    dp[n]=n + check(n/2)+check((n /2)+1);

    return dp[n];
}
**/


map<int,int>dp;
int check(int n)
{
    if(n<2)return 0;
    if(dp[n]!=0)return dp[n];
    return dp[n]=n+check(n/2)+check((n+1)/2);
}

 main() {
    int n;
    cin >> n;


    cout << check(n) << endl;

}
