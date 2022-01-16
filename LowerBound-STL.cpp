#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int queryCount;
    cin >> n;
    vector<int> vec1;
    
    for (int i=0; i < n; i++) {
        int temp;
        cin >> temp;
        vec1.push_back(temp);
    }

    
    cin >> queryCount;
    for (int i =0 ; i <queryCount; i++) {
        int temp;
        cin >>temp;
        
        vector<int>::iterator iter = lower_bound(vec1.begin(), vec1.end(), temp);
        
        if(*iter == temp)
        cout << "Yes " << iter -vec1.begin() +1 <<endl;
        else {
        cout << "No " << iter - vec1.begin() +1 <<endl;
        }
        
          
    }
    return 0;
}
