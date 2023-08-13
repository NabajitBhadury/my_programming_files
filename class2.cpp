#include<iostream>
using namespace std;

class System{

    private:
    string name;
    int salary;

    public:

    System(string name1, int salary1){
        cin>>name1>>salary1;
        name=name1;
        salary=salary1;
        
    }

    void getfun(){
        cout<<name<<salary;
    }


};
int main(){

    System nabajit;
    nabajit.getfun();


    return 0;
}