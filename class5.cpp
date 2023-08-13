#include <iostream>
using namespace std;


class Student
{

private:
    string name;
    string title;
    char sec, standard;
    int roll;
    static int count;
    int counter;
    

public:
    Student()
    {
        counter = count;
        cout << "Enter the student "<<counter<<" name :: " << endl;
        cin >> name;
        cout << "Enter the student "<<counter<<" surname :: " << endl;
        cin >> title;
        cout << "Enter the student "<<counter<<" standard :: " << endl;
        cin >> standard;
        cout << "Enter the student "<<counter<<" section :: " << endl;
        cin >> sec;
        cout << "Enter the student "<<counter<<" roll number :: " << endl;
        cin >> roll;
        cout<<endl;
        count++;
    }



    void print_data(){

        cout << "The name of student " << counter << " is "
             << ":: " << name <<" " <<title<<  endl;
        cout << "The standard of student " << counter << " is "
             << " :: " << standard << endl;
        cout << "The section of student " << counter << " is "
             << ":: " << sec << endl;
        cout << "The roll number of student " << counter << " is "
             << " :: " << roll << endl;
        cout<<endl;
    }
};


int Student::count=1 ;

int main()
{

    Student a;
    Student b;
    a.print_data();
    b.print_data();

    return 0;
}
