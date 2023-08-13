#include <iostream>
using namespace std;
int linear_search(int marks[],int n,int key){
     for (int i =0;i<n;i++){
        if (marks[i]==key)
        {
            return i;
        }
     }
        
     return -1;

}
int main(){
    int n;
    cout<<"enter the size of array "<<endl;
    cin>>n;
    int marks[n];
    cout<<"enter the data of array "<<endl;
    for (int i =0;i<n;i++){
        
        cin>>marks[i];
    }
    int key;
    cout<<"enter the key word you want to find"<<endl;
    cin>>key;
    key =linear_search(marks,n,key);
    cout<<key;
    return 0;


}