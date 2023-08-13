/*#include <iostream>
using namespace std;
int main(){



    return 0;
}*/
#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int m_of_four(int a, int b, int c, int d)` here.
*/
int maxNumber(int a,int b,int c,int d,){
   
   if (a>m){
       a=m;
   }
   else if(b>m){
       b=m;
   }
   else if(c>m){
       c=m;
   }
   else{
       d=m;
   }
   return m;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = maxNumber(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
