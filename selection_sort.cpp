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
    cin>>n;
    int arr[n],min_idx;
    get_array(n,arr);
    long tick1 = clock();
    for (int i = 0; i < n - 1; i++){
        min_idx = i;
        for(int j = i+1;j<n;j++){
            if(arr[min_idx]>arr[j]){
                min_idx = j; 
            }
        }
        swap(arr[i],arr[min_idx]);
    }
    print_array(n,arr);
    cout<<endl;
    long tick2 = clock();
    long tick_diff = tick2 - tick1;
    double time = (double)tick_diff/CLOCKS_PER_SEC;
    cout<<"The time required for the algorithm to run is"<<time<<" seconds";
    return 0;
}