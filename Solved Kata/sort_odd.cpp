#include <iostream>
 #include <vector>
 
 class Kata
{
public:
    std::vector<int> sortArray(std::vector<int> array)
    {
        const int n = sizeof(array);
        int arr[n];
        for(int i = 0; i < n; i++){
            if(array[i] % 2 != 0){
                for(int j = i; j < n-1; j++){
                    if(array[j] % 2 != 0){
                        if(array[i] > array[j]){
                            int temp = array[j];
                            array[j] = array[i];
                            array[i] = temp;
                        }
                    }
                }
           
            // int j,k;  
            // for (j = 0; j < n-1; j++)      
                
            //     // Last i elements are already in place  
            //     for (k = 0; k < n-i-1; k++){  
            //         if (arr[k] > arr[k+1]){  
            //             int temp = arr[k];  
            //             arr[k] = arr[k+1];  
            //             arr[k+1] = temp;    
            //         }
            //     }
            }
        }
       
      return array;
    }
};




int main(){

    Kata task;
    std::vector<int> vect = task.sortArray({ 5, 3, 2, 8, 1, 4 });
    
    // std::cout << task.sortArray({ 5, 3, 2, 8, 1, 4 });

    
}
