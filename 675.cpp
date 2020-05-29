#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    int res = 101;
    long long INF = 1e9;
    cin >> n >> m;
    char ss[n][m];
    for(int i = 0;i<n;i++){
        int a = -1,b = 101;
        for(int j = 0;j<m;j++){
            cin >> ss[i][j];
            if(ss[i][j] == 'A')
                a = max(a,j);
            else if(ss[i][j] == 'B')
                b = min(b,j);
            res = min(res,b-a-1);
        }
    }
    cout << res;
}
