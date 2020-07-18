#include <iostream>

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

int main(){
    int number;
    std::cout << "Insert a number: " << std::endl;
    std::cin >> number;
    std::cout << odd_count(number);

    return 0;
}