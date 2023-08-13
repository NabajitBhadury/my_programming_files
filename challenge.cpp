#include<iostream>
using namespace std;
// function to input an array from user
void input(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[100];
    input(arr, n);
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==1)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
