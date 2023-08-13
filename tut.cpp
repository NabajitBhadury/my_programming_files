#include<iostream>
using namespace std;


// In this way we can implement a class in c++
class StackSt
{
    // This is the private member of our class that cant be accessed
    private:
        int *arr;
        int length;
        int counter = -1;
    public:
    // this is our constructor 
        StackSt(int *array , int len)
        {
            arr = array;
            length = len;
        }
    // our getStack methodis decleared explecetely
    void getStack();
    // our displayStack method is decleared implecetely
    void displayStack()
    {
        for (int i = 0; i < length; i++)
        {
            cout << arr[i] << endl;
        }       
    }
};

void StackSt :: getStack()
{
    while (counter != length - 1)
    {
        counter++;
        cin >> arr[counter];
    }    
}

int main()
{
    int len;
    cout << "Enter the length of array ::" << endl;
    cin >> len;
    int array[len];
    // this is the object of class StackSt
    StackSt st(array, len);
    cout << "Enter the array elements ::" << endl;
    // using dot operation we can get access of the member methods
    st.getStack();
    cout << "The array elements are ::" << endl;
    st.displayStack();
    
    return 0;
}