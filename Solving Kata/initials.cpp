 #include <iostream>
 #include <cstring>
 #include <cstdlib>
 using namespace std;



 int main(){
    string name = "Will Smith";
    const int lenght = name.length();
    char words[lenght];
 

    strcpy(words, name.c_str());
    for(int i = 0; i < lenght; i++){
        //if(words[i] == " "){
            cout << words[0] + "." + words[i+1];
        //}
        //cout << words[i] << endl;
    }
 }
