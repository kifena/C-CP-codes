
#include <bits/stdc++.h>
using namespace std;

int fact(int t){
    int p = 1;
    for(int i = t;i>1;i--){
        p *=i;
    }
    return p;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    int d[t];
    for(int i = t;i>0;i--){
        d[t-i] = t - i + 1;
    }
    cout << fact(t) << endl;
    do {
            for (int i = 0;i<t;i++) {
                cout << d[i] << " ";
            }
            cout << endl;

   }while (next_permutation (d, d+t));
   return 0;
}
