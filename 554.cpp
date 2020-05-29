#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int d[n];
    d[1] = 2;
    d[2] = 4;
    if(n == 1 || n == 2){
        cout << d[n];
        return 0;
    }
    for(int i = 3;i<n+1;i++){
        d[i] = d[i-1] + i;
    }
    cout << d[n];
}
