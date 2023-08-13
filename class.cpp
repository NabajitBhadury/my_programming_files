#include <iostream>
using namespace std;
class student
{
private:
    int a, b, c;

public:
    int e, d;
    void setfun(int a1, int b1, int c1);
    void getfun()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
        cout << "the value of d is " << d << endl;
        cout << "the value of e is " << e << endl;
    }
};
void student ::setfun(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    student nabajit;
    nabajit.d = 7;
    nabajit.e = 10;
    nabajit.setfun(1, 5, 9);
    nabajit.getfun();

    return 0;
}