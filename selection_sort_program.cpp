#include<iostream>
#include<time.h>
using namespace std;
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

void print_array(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cout<<"ENter array size :: "<<endl;
    cin>>n;
    int arr[n],min_idx;
    cout<<"Enter array elements :: "<<endl;
    get_array(n,arr);
    for (int i = 0; i < n - 1; i++){
        min_idx = i;
        for(int j = i+1;j<n;j++){
            if(arr[min_idx]>arr[j]){
                min_idx = j; 
            }
        }
        swap(arr[i],arr[min_idx]);
    }
     cout << endl
         << "The sorted array is :: " << endl;   
    print_array(n,arr);
    return 0;
}