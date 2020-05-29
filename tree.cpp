#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long o = 1e9;
    int n,m;
    cin >> n >> m;
    vector<string> v(n);
    for(int i = 0;i<n;i++){
        cin >> v[i];
    }
    vector<vector<int> > d(n,vector<int>(m, -o));
    d[0][0] = 0;
    for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(v[i][j] == '*')
                continue;
            if(i > 0){
                d[i][j] = max(d[i][j],d[i-1][j]);
            }
            if(j > 0){
                d[i][j] = max(d[i][j],d[i][j-1]);
            }
            d[i][j] += v[i][j] - '0';

        }
    }
    if(d[n-1][m-1]< -o / 2){
        cout << "SEE YOU LATER";
    }
    else cout << d[n-1][m-1];
}
