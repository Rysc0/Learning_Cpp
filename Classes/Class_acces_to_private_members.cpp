// Write a class having two private variables and one member function which will return the area of the rectangle.
#include <iostream>
using namespace std;

class rectangle{
    public:
        void area(){
            double area = a * b;
            cout << "Area of rectangle: " << area << endl;
        }
    private:
        int a = 556.5, b = 23.56;

};


int main(){

    rectangle rec;
    rec.area();
   
    return 0;
}
