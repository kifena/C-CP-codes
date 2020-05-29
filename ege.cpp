#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int cnt = 0;
    for(int u = 0;u<t;u++){
        int ans[n];
        int n;
        cin >> n;
        int a [n];
        for(int j = 0;j<n;j++){
            cin >> a[j];
            --a[j];
        }
        for(int i = 0;i<n;i++){
            int k = a[i];
            do {
                ++cnt;
                k = a[i];
            } while k != i;
            cout<<cnt <<" ";
        }
        cout << endl;
    }
}
