#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a1,a2,a3,b1,b2,b3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
    int res = 0;
    int a[] = {a1,a2,a3};
    sort(a,a+3);
    int b[] = {b1,b2,b3};
    sort(b,b+3);
    for(int i = 0;i<3;i++){
        res += a[i] * b[i];
    }
    cout << res;
}
