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
    int n;int j;
    for(int i=1;i<n;i++){
        for(int j=1:j<=i;j++){
           cout<< fact(i)/(fact(j)*fact(i-j));
        }
        cout<<endl;
    }
}