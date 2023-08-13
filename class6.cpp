#include<iostream>
using namespace std;

class Complex{
    private:
        int a,b;
        friend sum();
    public:
        void set_data(){
            cin>>a>>b;
        }
        void get_data(){
            cout<<"The complex number is "<<a<<" + i"<<b<<endl;
        }

};

class Complex :: sum()

int main(){

    Complex n ;
    Complex p ;
    n.set_data();
    n.get_data();
    p.set_data();
    p.get_data();

    return 0;
}