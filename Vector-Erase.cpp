#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n; 
    int x,a,b;
    cin >> n;
    
    vector<int> vec1;
    for (int i=0; i < n; i++) {
        int temp;
        cin >> temp;
        vec1.push_back(temp);
    }
    
    
    cin >> x;
    vec1.erase(vec1.begin() + x - 1);
    
    cin >> a >> b;
    vec1.erase(vec1.begin() + a -1, vec1.begin() + b -1 );
    
    cout << vec1.size() << endl;
    for (int i=0; i < vec1.size(); i++) {
        cout << vec1[i] <<" ";
    }
    return 0;
}
