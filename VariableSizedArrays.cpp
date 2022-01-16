#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q;

    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        int length;
        cin >> length;
        arr[i].resize(length);
        for(int j = 0; j < length; j++)
        {
            cin >> arr[i][j];
        }       
    }
    
    for(int i=0; i < q; i++)
    {
        
        int x,index;
        cin >> x >> index;
        cout << arr[x][index] <<endl;
    }
    return 0;
}
