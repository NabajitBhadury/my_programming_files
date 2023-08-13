#include <iostream>
using namespace std;
class Complexmn
{
private:
    int num1, num2;

public:
    Complex(int numA , int numB )
    {
        num1 = numA;
        num2 = numB;
    }

    Complex()
    {
        cout << "The complex number is " << num1 << " + i" << num2;
    }
};

int main()
{
    int a, b;
    cout << "Enter the two numbers :: " << endl;
    cin >> a >> b;
    Complex num;
    // num.setData(a, b);
    return 0;
}