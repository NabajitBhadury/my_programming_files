#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    char standard;
    char section;
    int roll;

public:
    void getdata()
    {
        cout << "Name is :-";
             << "Standard is :-" << standard << endl
             << "Section is :-" << section << endl
             << "Roll is :-" << roll << endl;
    }

    Student(string name1, char standard1, char section1, int roll1)
    {

        name = name1;
        standard = standard1;
        section = section1;
        roll = roll1;
    }
};

int main()
{
    Student nabajit = Student('X', 'A', 85);

    nabajit.getdata();
    return 0;
}
