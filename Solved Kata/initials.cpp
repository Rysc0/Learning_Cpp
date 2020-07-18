 #include <iostream>
 #include <cstring>
 #include <cstdlib>
 using namespace std;

dtoi

 int main(){
    string name = "Boris Bastek";
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
