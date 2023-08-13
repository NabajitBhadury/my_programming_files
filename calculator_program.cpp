#include <iostream>
using namespace std;
int main() {
    float num1;
    float num2;
    char operatorr;
    cout<<"enter two numbers:- ";
    cin>>num1;
    cin>>num2;
    cout<<"enter the character you want to operate:- ";
    cin>>operatorr;
    switch(operatorr)
        case'+':
        cout<<"your result is"<<num1 + num2;

        break;
        case '-':
        cout<<"your result is"<<num1 - num2;
        break;
        case'*':
        cout<<"your result is"<<num1*num2;
        break;
        case'/':
        cout<<"your result is"<<num1/num2;
        break;
        // case'%':
        // cout<<num1%num2;
       //  break;
        default:
        cout<<"your result is"<<"check your input values!";
        break;
        }
        return 0;
}

    
    
    

