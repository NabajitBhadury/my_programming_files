#include <iostream>
using namespace std;
int fact(int a)
{
    int factorial =1;
    for (int i = 1; i <= a; i++)

    {
        factorial = factorial * i;
    }
    return factorial;
}
int main()
{
    int num;
    cin >> num;
    int factorial;
    factorial = fact(num);
    cout << factorial;
    return 0;
}