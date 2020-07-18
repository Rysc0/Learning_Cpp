#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(){

	
	string arr[] = { 
	"first",
	"second",
	"third",
	"fourth"
	};
	
	vector <string> vectorOfStrings(arr, arr + sizeof(arr) / sizeof(string));
	
	for(string str: vectorOfStrings){
		cout << str << endl;
	}
	int n = vectorOfStrings.size();
	cout << "Size of this vector is: " << n << endl;
	int max = vectorOfStrings.max_size();
	cout << "MAX size of this vector is: " << max << endl;

	return 0;
}

