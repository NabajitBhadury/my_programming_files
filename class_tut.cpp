#include<iostream>
using namespace std;

class Student{
    private:
        string name;
        int age,roll;
        char sd;

    public:
        // void setdata(string name1,int age1,int roll1,char sd1){
        //     name = name1;
        //     age = age1;
        //     roll = roll1;
        //     sd = sd1;
        // }
        Student(){
            cout<<"Hello Jonogons";
        }
        Student(string name1,int age1,int roll1,char sd1){
                name = name1;
                age = age1;
                roll = roll1;
                sd = sd1;
        }


        void getdata(){
            cout<< "name is :: "<<name<<endl<<
                   "age is :: "<<age<<endl<<
                   "roll is :: "<<roll<<endl<<
                   "standard is :: "<<sd<<endl;

        }
        
};

int main(){
    // Student student1("Nabajit",19,21,'C');
    int age,roll;
    string name;
    char sd;
    cin>>name>>age>>roll>>sd;
    Student student2(name,age,roll,sd);
    student2.getdata();
    Student student1;

    // student2.setdata("Nabajit",19,21,'C');
    // student1.getdata();


    return 0;
}
