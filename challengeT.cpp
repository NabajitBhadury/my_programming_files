#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number of rows ::"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++) {
         for(int j=1;j<=n;j++){
            if(for (int x=1;x<=1 || x<=j;x++)){
                if(i==n ||i==1 || j==n || j==1){
                cout<<n<<" ";
            }
            }
            else{
                cout<<n-1<<" ";
            }
         }
         cout<<endl;
    }

    return 0;
}