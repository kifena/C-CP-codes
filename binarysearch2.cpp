#include <iostream>

using namespace std;
    int n,m;
    const int MAXN = 2e5 + 10;
    long long sum[MAXN];
    long long a[MAXN];
int main()
{
    cin >> n >> m;
    for(int i = 1;i<=n;i++){
        cin >> a[i];
        sum[i] = sum[i-1] + a[i];
    }
    for(int j = 1;j<=m;j++){
        long long b;
        cin >> b;
        int l = 1,r = n, pos = 0;
        while (l <= r){
            int mid = (l+r)/2;
            if(sum[mid] <= b){
                pos = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        if(sum[pos] == b){
            cout << pos << " "<< a[pos]<<endl;
        }
        else {
            cout << pos + 1 << " " << b - sum[pos]<< endl;
        }
    }
}
