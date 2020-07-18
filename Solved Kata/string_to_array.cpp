#include <iostream>
#include <string>
using namespace std;

 

 
int main(){
 
    string txt = "Ovo je bezvezna recenica!";
    const int l = txt.length();
    string array[l];
   // int len = txt.length();
    for(int i = 0; i < txt.length(); i++){
        cout << txt[i];
        array[i] = txt[i];
        //cout << array[i];
        
    }
    cout << endl;
    int arr[l];
    int spaces = 0;
    
    int min = 0;
    int index = 0;
    while(array != "\0"){
        if(array != " "){
            min += 1;
        }
        else spaces += 1;
    }
      
    }
    // for(int i = 0; i < txt.length(); i++){
    // 	int min = 0;
    //     if(array[i] == " "){
    //         spaces += 1;
    //     }
    //     else{
    //         min += 1;
    //     }
    //     arr[i] = min;
	// //	min = 0;
    //     // cout << array[i] << endl;
    //     // cout << broj;
    // }


    for(int i = 0; i < sizeof(arr); i++){
        cout << "This is last array" << arr[i] <<endl;
    }


 
    return 0;
}
