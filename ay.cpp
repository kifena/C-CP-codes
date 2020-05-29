#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <double> d;
    for(int i = 0;i<n;i++){
        int t;
        cin >> t;
        if (t % 3 == 0)
            d.push_back((double)t);
    }
    int len = d.size();
    double cnt = 1;
    for(int j  = 0;j<len;j++){
        cnt *= sqrt(pow(d[j],3.0));
    }
    cout << cnt;
}
