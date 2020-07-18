#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


class firstClass{
    public:
        string name;
        int godine;
        double visina;
        int brzina(int array[], int size){
            int max = 0;
            for(int i = 0; i < size; i++){
                if(max < array[i]){
                	max = array[i];
                }
            }
			return max;
        }
        firstClass(){
            cout << "Ja sam class constructor -> metoda/funkcija koja se automatski pokrece kad se napravi objekt ove klase!" << endl;
        }
};

class secondClass: public firstClass{
    public:
        secondClass(){
            cout << "Ja sam druga klasa i ovo je moj konstruktor! Nasljedjujem sve iz frstClass pa mogu koristit metodu brzina!" << endl;
        }
};

int main(){
	int brojevi[10];
	srand(time(NULL));
	for(int i = 0; i < 10; i++){
		brojevi[i] = rand()%1000;
        cout << "i = " << brojevi[i] << endl;
	}

    firstClass osoba;

     cout << "Unesi ime osobe: ";
     cin >> osoba.name;
     cout << "Unesi godine: ";
     cin >> osoba.godine;
     cout << "Unesi visinu: ";
     cin >> osoba.visina;
     
     // kod za određivanje veličine niza
     //int len = sizeof(brojevi)/sizeof(brojevi[0]);
     //osoba.brzina(brojevi,len);
     //cout << "The length of the array is: " << len;
     

     cout << endl << "Ime: " << osoba.name << endl 
        << "Godina: " << osoba.godine << endl
        << "Visina: " << osoba.visina << endl;   
    
	cout << "Max speed je: " << osoba.brzina(brojevi, 10) << endl;
    
    cout << endl;
    secondClass covjek; // Ponovo se pokrece i konstruktor prve klase jer druga klasa nasljeduje sve iz prve!
	cout << "DRUGA KLASA " << covjek.brzina(brojevi,10) << endl;

    return 0;
}
