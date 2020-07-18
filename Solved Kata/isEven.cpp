#include<math.h>
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
bool is_even(double n)
{
   
    	int y = n * 10;
        if(y % 10 == 0 && (y/10) % 2 == 0){
            return true;
        }
        else return false;
    
}

int main(){
    srand(time(NULL));
    std::cout << is_even(14) << std::endl;
    std::cout << is_even(-0.5) << std::endl;
    std::cout << is_even(-1.156) << std::endl;
    std::cout << is_even(124) << std::endl;
    std::cout << is_even(-54) << std::endl;
    double random_num = rand()%1000;
    double random_num1 = rand()%1000-2000;
    std::cout << "Random: "  << random_num << std::endl;
    std::cout << "Random: "  << random_num1 << std::endl;
    std::cout << is_even(random_num) << std::endl;
    std::cout << is_even(random_num1) << std::endl;
    return 0;
}


