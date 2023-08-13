#include<iostream>
using namespace std;
int main(){

    int n,n1 = 0,n2 =1,temp ;
    cin>>n;
    cout<<n1<<" "<<n2<<" ";
    for(int i = 0;i<=n-3;i++){
        temp = n1+n2; // temp = 0+1 = 1
        cout<<temp<<" ";
        n1 = n2;// n1 = 1
        n2 = temp;//n2 = 1

    }

}