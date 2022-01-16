#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
   int biggest =a;
   for(int i = 0 ; i< 4  ; i++)
   {
        if(a>b && a >c && a >d)
            biggest = a;
        else if(b>a && b>c && b>d)
            biggest = b;
        else if(c>a && c>b && c>d)
            biggest = c;
        else if(d>a && d>b && d>c)
            biggest = d;          
   }

   return  biggest;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
