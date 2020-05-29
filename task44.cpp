#include <bits/stdc++.h>

using namespace std;

long long a,b,n,k;
 bool ok (long long igrek){
    return igrek * a + b *(n - igrek) < k;
 }

int main()
{
    int kk;
    cin >> kk;
    for(int i = 0;i<kk;i++){
        cin >> k >> n >> a >> b;
        long long l = -1, r = n+1;
        while(r - l > 1){
            long long mid = (r+l) / 2;
            if(ok(mid)){
                l = mid;
            }
            else r = mid;
        }
        cout << l << endl;
    }
}
