#include<iostream>
using namespace std;
int binary_search(int number[],int n,int key){
    int first_term=0;
    int last_term=n;
    while (first_term<=last_term)
    {
        int mid_term=(first_term+last_term)/2;
        if (number[mid_term]==key)
        {
            return mid_term;
        }
        else if(number[mid_term]>key){
            last_term=(mid_term-1);
        }
        else{
            first_term=(mid_term+1);
        }
        
    }
    return -1;
}

int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int number[n];
    
    cout<<"enter the elements of array"<<endl;
    
    for(int i=0;i<n;i++){
        cin>>number[i];

    }
    int key;
    cout<<"enter the key number to found"<<endl;
    cin>>key;
    int result;
    result=binary_search(number,n,key);
    cout<<result;
    
}