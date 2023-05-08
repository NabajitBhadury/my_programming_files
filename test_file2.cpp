#include<iostream>
using namespace std;

void set_array(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        // cin>>arr[i];
        int num = rand();
        arr[i] = num;
    }
}

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int left_idx, int right_idx)
{
    int pivot = arr[left_idx];
    int i = left_idx + 1;
    int j = right_idx;

    while(i <= j)
    {
        while(arr[i] <= pivot)
        {
            i++;
        }

        while(arr[j] > pivot )
        {
            j--;
        }

        if(i < j)
        {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[left_idx], arr[j]);
    return j;
}

void quick_sort(int arr[], int left_idx, int right_idx)
{
    if(left_idx < right_idx)
    {
        int prtn_idx = partition (arr, left_idx, right_idx);
        quick_sort(arr, left_idx, prtn_idx-1);
        quick_sort(arr, prtn_idx+1, right_idx);
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
    cin >> n;
    int arr[n];
    int left_idx = 0;
    int right_idx = n-1;
    set_array(arr, n);
    long tick1 = clock();
    quick_sort(arr, left_idx, right_idx);
    long tick2 = clock();
    long tick_diff = tick2 - tick1;
    double time = (double)tick_diff/CLOCKS_PER_SEC;
    print_array(arr, n);
}
