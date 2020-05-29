#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    int n;
    cin >> s1 >> s2;
    n = s1.length();
    int m1 = 0,p1=0,u=0,m2=0,p1=0;
    for(int i =0;i<n;i++){
        if(s1[i] == '+') p1++;
        else m1++;
    }
    for(int i = 0;i<n;i++){
        if(s2[i]=='+') p2++;
        if(s2[i] == '-') m2++;
        if(s2[i] == '?') u++;
    }
    if(p2>p1 || m2>m1){
        cout << "0.000000000000";
        return 0;
    }

}
