#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle{

    public:
        int width;
        int height;

    // public :


        void display(){
            cout<<width<<" "<<height<<endl;
        }

};

class RectangleArea : public Rectangle{
    private:
        int area;
    public:

        void read_input(){

                cin>>width>>height;

        }

        void display(){

            area=height*width;
            cout<<area;

        }  

};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}