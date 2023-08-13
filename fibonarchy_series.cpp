#include <iostream>
using namespace std;
void fib(int num){
    int a=0;
    int b=1;
    int next_term;
    for (int i = 0; i <= num; i++)
    {   cout<<a<<endl;
        next_term=a+b;
        a=b;
        b=next_term;
        
    }
    
return ;
}
int main(){
    int n;
    cin>>n;
    fib(n);
}