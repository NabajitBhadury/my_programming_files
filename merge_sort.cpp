#include<iostream>
using namespace std;

void set_array(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
}

void merge(int arr[],int left_idx,int mid_idx,int right_idx,int n)
{
    int i = left_idx;
    int j = mid_idx + 1;
    int k = left_idx;
    int temp_arr[n];

    while(i <= mid_idx && j <= right_idx)
    {
        if(arr[i] > arr[j])
        {
            temp_arr[k] = arr[j];
            j++;
        }
        else
        {
            temp_arr[k] = arr[i];
            i++;
        }
        k++;
    }

    while(i <= mid_idx)
    {
        temp_arr[k] = arr[i];
        i++;
        k++;
    }

    while(j <= right_idx)
    {
        temp_arr[k] = arr[j];
        j++;
        k++;
    }

    for(int idx = left_idx;idx<=right_idx;idx++)
    {
        arr[idx] = temp_arr[idx];
    }
}

void merge_sort(int arr[], int left_idx, int right_idx, int n)
{
    if(left_idx < right_idx)
    {
        int mid_idx = (left_idx + right_idx)/2;
        merge_sort(arr, left_idx, mid_idx,n);
        merge_sort(arr, mid_idx+1, right_idx,n);
        merge(arr,left_idx,mid_idx,right_idx,n);
    }

}

void print_array(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array ::" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the array elements ::" << endl;
    set_array(arr, n);
    int left_idx = 0;
    int right_idx = n-1;
    cout << "The sorted array is ::" << endl;
    merge_sort(arr,left_idx,right_idx,n);
    print_array(arr,n);
    return 0;
}