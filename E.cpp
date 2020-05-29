#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,a,b;
    long long un = 1e9;
    cin >> m >> a >> b;
    vector<int> t(m+1);
    for(int i = 0;i<m+1;i++){
        cin >> t[i];
    }
    vector<int> d(m+1,un);
    d[0] = 0;
    for(int i = 0;i<m;i++){
        if(d[i] > un/2)
            continue;
        for(int j = a;j<=b;j++){
            if(i + j <= m && t[i+j]){
                d[i+j] = min(d[i+j],d[i]+1);
            }
        }
    }
    if(d[m]>un/2)
        d[m] = -1;
    cout << d[m];
}
