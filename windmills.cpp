#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,c,i,p,q,r;

    scanf("%d%d%d%d", &n, &a, &b, &c);

    int dp[5002];

    dp[0] = 0;

    for ( i = 1; i <= n; i++ ) {
            if ( i >= a && dp[i-a] != -1 ) dp[i] = max(dp[i], 1 + dp[i-a]);
            if ( i >= b && dp[i-b] != -1 ) dp[i] = max(dp[i], 1 + dp[i-b]);
            if ( i >= c && dp[i-c] != -1 ) dp[i] = max(dp[i], 1 + dp[i-c]);
    }

    if ( dp[n] == -1 ) dp[n] = 0;
    printf("%d\n", dp[n]);

    return 0;
}

