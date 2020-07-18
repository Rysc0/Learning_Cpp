#include <iostream>

using namespace std;
 


int odd_count(int n){
  if(n <= 0){
    return 0;
  }
  int number = 0;
  for(int i = 1; i < n; i+=2){
   
      number += 1;
    
  }
  return number;
}

unsigned halving_sum(unsigned n) {
  int sum = n;
  int element;
  for(int i = 2; i < sum; i=i*2){
    element = n/i;
    if(element == 1){
    sum += 1;  
    return sum;
   }
    else{ 
      sum += element;
    }
  }
  return sum;
}
 
int main(){
 
    cout << odd_count(15) << endl;
    cout << odd_count(15023) << endl;
 
 	cout << halving_sum(127) << endl;
 	
    return 0;
}
