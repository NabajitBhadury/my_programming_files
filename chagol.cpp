#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the number whose table you want :-";
    cin>>a;
    for(int i=1;i<=10;i++){
       cout<<a<<'*'<<i<<'='<<a*i<<endl;
    }
    return 0;
}