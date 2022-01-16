#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> s;
    int q;
    cin >> q;    
    for (int i=0 ; i < q; i++) {
        int type;
        cin >> type;
        if(type ==1)
        {
            int temp;
            cin >> temp;
            s.insert(temp);
        }
        else if (type == 2) {
            int temp;
            cin >> temp;
            s.erase(temp);
        }
        else if (type == 3) {
            int temp;
            cin >> temp;        
            set<int>::iterator itr = s.find(temp);
            if(itr==s.end())
                cout <<"No"<<endl;
            else {
                cout <<"Yes"<<endl;
            }
                
        }
        
        
        
    
    }
   
      
    return 0;
}



