#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a,b,c;
    cin >> a >> b >> c;
    int d[5000];
    bool v[5000];

    for(int i= 1; i<=n;i++){
        d[i] = 0;
        v[i] = false;
    }
    d[0] = 0; v[0] = true;+
    int ans = 0;
    for(int i=1 ; i <= n; i++){
        if (i >= a && v[i-a] == true) {
                d[i] = max(d[i], 1 + d[i-a]);
                v[i] = true;
        }
        if (i >= b && v[i-b] == true) {
                d[i] = max(d[i], 1 + d[i-b]);
                v[i] = true;
        }
        if (i>=c && v[i-c] == true){
                d[i] = max(d[i], 1 + d[i-c]);
                v[i] = true;
        }
    }
    cout << d[n];
}
