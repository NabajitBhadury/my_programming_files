#include<iostream>
using namespace std;
int main(){
    int row;
    int column;
    cout<<"enter the number of rows";
    cin>>row;
    cout<<"enter the number of columns";
    cin>>column;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            cout<<" * ";
        }
       cout<<endl; 
    }
    

    return 0;
}
