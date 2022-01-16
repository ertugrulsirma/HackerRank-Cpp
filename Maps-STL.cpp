#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin >> q;
    
    map<string,int> map1;
    
    for (int i=0; i < q; i++) {
        int temp;
        cin >> temp;
        if(temp ==1)
        {
            string s1;
            int i1;
            cin >> s1 >> i1;
           // map1.insert(make_pair( s1,i1 ));
            map1[s1] += i1;
        }
        else if (temp == 2) 
        {
            string s1;
            cin >> s1;
            map1.erase(s1);
        }
        else if (temp == 3) 
        {
            string s1;
            cin >> s1;
            map<string,int>::iterator itr;
            itr = map1.find(s1);
            if(itr == map1.end())
            {
                cout<< "0" <<endl;
            }
            else 
            {    
                cout << map1[s1]<<endl;
            }
        }   
    }
    return 0;
}



