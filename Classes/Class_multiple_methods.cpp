// Write a c++ class called 'student' with

// Data members:

// name(char type),

// marks1,marks2 (integer type)

// The program asks the user to enter name and marks. 
// Then calc_media() calculates the media note and disp() display name and total media mark on screen in different lines.

#include <iostream>

using namespace std;
 
 class Student{
     public:
        string name;
        int mark1,mark2;
        
        double calc_media(){
            double media = (mark1+mark2)/2;
            return media;
            //cout << "Media mark is: " << media << endl;
        }

        void disp(){
            
            cout << "Name of the student: " << name << endl;
            cout << "Media mark: " << calc_media() << endl;
        }
 };

 
int main(){
 
    Student s;

    cout << "Input first name: ";
    cin >> s.name;
    cout << "Input first mark: ";
    cin >> s.mark1;
    cout << "Input second mark: ";
    cin >> s.mark2;


   s.disp();


 
 
    return 0;
}
