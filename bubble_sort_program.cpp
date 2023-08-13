#include <iostream>
using namespace std;

void set_array(int n, int arr[])
{

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
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

int main()
{
    int n, flag = 0;
    cout<<"ENter array size :: "<<endl;
    cin >> n;
    int arr[n];
    cout<<"Enter array elements :: "<<endl;
    set_array(n, arr);
    for (int i = 0; i < n - 1; i++)
    {
        for (int k = 0; k < n - i - 1; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                swap(arr[k], arr[k + 1]);
            }
        }
    }
    cout << endl
         << "The sorted array is :: " << endl;
    print_array(n, arr);
    return 0;
}