#include <iostream>
using namespace std;
int main(){
int a;int b;
cin>>a;
    for(b=2;b<a;b++){
        if (a%b==0)
        {
            cout<<"the number is not prime";
            break;
        }
        else{
            cout<<"the number is prime";
            break;
        }

        
    }
    return 0;

}
