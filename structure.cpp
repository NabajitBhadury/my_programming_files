#include <iostream>
using namespace std;
struct employee
{
    int id;
    string name;
    float sallary;
};

int main (){
    struct employee nabajit;
    nabajit.id=1;
    nabajit.name="Nabajit Bhadury";
    nabajit.sallary=1200000;
    cout<<nabajit.name;
    return 0;
}
