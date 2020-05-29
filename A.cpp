#include <bits/stdc++.h>
using namespace std;

vector <long long> d;
long long n,ll;

bool can (long long k){
    long long pl = 0;
    for(int i = 0;i<n;i++){
        if(pl < d[i] - k)
            return false;
        pl = d[i] + k;
    }
    return pl >= ll;
}


int main()
{
    cin >> n >> ll;
    d.resize(n);
    for(int i = 0;i<n;i++){
        cin >> d[i];
        d[i]*= 2;
    }
    ll*= 2;
    sort(d.begin(),d.end());
    long long l = 0, r = ll;
    while(r - l > 1){
        long long mid = (r + l) >> 1;
        if(can(mid))
            r = mid;
        else
            l = mid;
    }
    cout << fixed << setprecision(3) << (double) r / 2;
}
