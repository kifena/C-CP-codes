#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    vector< vector <int> > v;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            int t;
            cin >> t;
            v.push_back(t);
        }
    }

}
