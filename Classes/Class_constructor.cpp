// Write a program and input two integers in main and pass them to default constructor of the class. Show the result of the additon of two numbers.
#include <iostream>

using namespace std;
 
 
class add_Two_numbers{
    public:
        add_Two_numbers(int a, int b){
            int number = a + b;
            cout << "Result is: " << number << endl;
        }   
};
 
int main(){
    int a,b;
    cout << "Input first number: ";
    cin >> a;
    cout << "Input second number: ";
    cin >> b;

    add_Two_numbers(a,b);
 
 
    return 0;
}