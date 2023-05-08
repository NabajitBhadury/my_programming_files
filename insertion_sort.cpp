#include<iostream>

void get_array(int n,int arr[]){
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
}

void swap(int &num1, int &num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

int main(){
    int n,arr[n];
    cout<< "Enter the sixe of the array :: "<<endl;
    cin>>n;
    cout<<"Enter the array elements";
    get_array(n,arr);
    for(int i = 0;i<n;i++){
        for(int j = i;j<i+1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }


}
