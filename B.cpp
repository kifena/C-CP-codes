#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m;
    cin >> n;
    int a[n];
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    cin >> m;
    for(int i = 0;i<m;i++){
        long long x;
        cin >> x;
        int l = 0, r = n-1;
        int benjamin = 0;
        while(l <= r){
            long long mid;
            mid = (l+r) / 2;
            if(a[mid] <= x){
                benjamin = mid + 1;
                l = mid + 1;
            }
            else if (a[mid] > x){
                r = mid - 1;
            }
        }
        cout << benjamin << endl;
    }
}
