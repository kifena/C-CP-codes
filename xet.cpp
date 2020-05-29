#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    int n,i,p1=0,m1=0,p2=0,m2=0,q=0;
    int f[11];
    f[0]=1;
    for(i=1; i<11; i++)
        f[i]=i*f[i-1];
    n=s1.length();
    for(i=0; i<n; i++){
        if(s1[i]=='+') p1++;
        else m1++;
    }
    for(i=0; i<n; i++){
        if(s2[i]=='?')
            q++;
        else if(s2[i]=='+')
            p2++;
        else
            m2++;
    }
    if(p2>p1 || m2>m1){
        cout << 0.000000 << endl;
        return 0;
    }
    double ans = (f[q]*1.00)/(f[p1-p2]*f[q-p1+p2]*1.00);
    for(i=0; i<q; i++)
        ans*=0.5;
    cout << fixed << setprecision(12) << ans << endl;
}
