#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,v;
    long long INF = 1e9;
    cin >> n >> v;
    vector < vector <int> > d (n + 1, vector <int> (v + 1,INF));
    d[1][0] = 0;
    for(int i = 0;i<n;i++){
        for(int x = 0;x <= v; x++){
            for(int pluss = 0; x + pluss <= v; pluss++){
                if(x + pluss > 0){
                    cout << d[i + 1][x + pluss - 1];
                    d[i + 1][x + pluss - 1] = min(
                        d[i + 1][x + pluss - 1],
                        d[i][v] + i * pluss
                    );
                    cout << d[i][v] + i * pluss << " " << d[i + 1][x + pluss - 1] << endl;
                }
            }
        }
    }
    cout << d[n][v];
}
