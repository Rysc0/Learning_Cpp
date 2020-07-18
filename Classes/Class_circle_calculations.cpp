#include <iostream>
#include <cmath>
using namespace std;


class Circle{
	public:
	//	Circle(int radius){
				
			double getArea(double radius){
				double Area = (3.14*(pow(radius,2)));
				return Area;
			}
			
			double getPerimeter(double radius){
				double Perimeter = (2*3.14*radius);
				return Perimeter;
			}
	
	//	}
};


int main(){
	
	Circle circy;
	
	cout << circy.getArea(11) << endl;
	

	cout << circy.getPerimeter(4.44) << endl;
	
	return 0;
}
