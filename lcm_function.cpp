#include<iostream>
#include<math.h>
using namespace std;

int check_prime(int n, int i = 2)
{
    if(n<2)
    {
        return 0;
    }
    else if(i>sqrt(n))
    {
        return 1;
    }
    else if(n%i == 0)
    {
        return n;
    }
    else 
    {
        return check_prime(n,i+1);
    }
    
}


int main()
{
    int n;
    cin >> n;
    int num = check_prime(n);
    if(check_prime(n) == 1)
    {
        cout << "prime";
    }
    else
    {
        cout << "not";
    }
}