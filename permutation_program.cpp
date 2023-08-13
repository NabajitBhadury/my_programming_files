#include <iostream>
using namespace std;
int fact(int a){
     int factorial=1;
    for (int i = 1; i <= a; i++)
    
    {  
        factorial=factorial*i;
        
    }
    
return factorial;
}

int main(){
    int n;
    int r;
    int permutation;
    cin>>n>>r;
    permutation=fact(n)/(fact(r)*fact(n-r));
    cout<<permutation;

}