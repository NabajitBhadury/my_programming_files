#include <iostream>
#include<time.h>
using namespace std;
int main()
{
    int n, min_idx, temp;
    cin >> n;
    int arr[n];
    // cout << "Enter the elements of the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        // cin >> arr[i];
        int num = rand();
        arr[i] = num;
    }
    long tick1 = clock();
    for (int i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }

    cout << "The shotted array is :: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout<<endl;
    long tick2 = clock();
    long tick_diff = tick2 - tick1;
    double time = (double)tick_diff/CLOCKS_PER_SEC;
    cout<<"The time required for the selection sort algorithm to run is "<<time<<" seconds";

    return 0;
}
