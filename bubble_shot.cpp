#include <iostream>
#include<time.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n], temp;
    // cout << "enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        // cin >> arr[i];
        int num = rand();
        arr[i] = num;

    }

    long tick1 = clock();


    for (int i = 0; i < n - 1; i++)
    { 
        for (int j = 0; j <= n - i; j++)    // runs loop to array index 0 to n-1 to check for the first index
        {
            if (arr[j] > arr[j + 1])        // runs loop to shift the smaller elements towards the left
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout<<endl;
    long tick2 = clock();
    long tick_diff = tick2 - tick1;
    double time = (double)tick_diff/CLOCKS_PER_SEC;
    cout<<"The time required for the bubble sort algorithm to run is "<<time<<" seconds";


    return 0;
}


