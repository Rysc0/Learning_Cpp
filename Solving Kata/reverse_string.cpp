#include <iostream>
#include <cstring>
using namespace std;

void reverse(string word){
       cout << word << endl;
       int lenght = word.length();
       cout << lenght << endl;
       char new_word[lenght+1];
       
       strcpy(new_word, word.c_str());
       
       for(int i = lenght-1; i >= 0; i--){
           cout << new_word[i];
       }
}



int main(){
	
	string txt;
	cout << "Insert text: ";
	getline(cin, txt);
    reverse(txt);
    
    int len = txt.length();
    cout << "duljina: " << len;


    return 0;
}
