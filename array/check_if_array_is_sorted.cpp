#include <iostream>
using namespace std;
int main(){

    int arr[] = {1,2,3,4,5}; // array
    int n = 5; // size
    bool sorted = true; // initially assume sorted
    for(int i = 0; i < n - 1; i++){ // traverse till second last element
        if(arr[i] > arr[i + 1]){ // wrong order found
            sorted = false; // mark unsorted
            break; // stop checking further
        }
    }
    if(sorted == true){ // if no wrong pair found
        cout << "Array is sorted";
    }
    else{ // if wrong pair found
        cout << "Array is not sorted";
    }
    return 0;
}
