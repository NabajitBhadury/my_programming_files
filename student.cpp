#include <iostream>
using namespace std;
class Student {
private:
  string name;
  int roll;
  char standard;

public:
  // Making a constructer
  Student(string name_in, int roll_in, char standard_in) {
    name = name_in;
    roll = roll_in;
    standard = standard_in;
  }
  /* void setdata(string name1, int roll1, */
  /*              char standard1) { // it sets the value of name, roll, standard
   */
  /*   name = name1; */
  /*   roll = roll1; */
  /*   standard = standard1; */
  /*   // cin>>name1>>roll1>>standard1; */
  /* } */
  void getdata() { // it prints the value to be displayed

    cout << "enter name:-  " << name << endl;
    cout << "enter roll:-  " << roll << endl;
    cout << "enter standard:-  " << standard << endl;
  }
};

int main() {
  Student nabajit("Nabajit Bhadury", 85, 'X');
  /* nabajit.setdata("Nabajit Bhadury", 85, 'X'); */
  nabajit.getdata();

  // cout<<"hello world";
  return 0;
}
