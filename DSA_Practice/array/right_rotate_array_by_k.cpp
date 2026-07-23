#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7}; // original array
    int n = 7; // size of array
    int k = 3; // rotate by 3 places
    int temp[k]; // temporary array
    for(int i = 0; i < k; i++){                                      // Step 1: Store last k elements
        temp[i] = arr[n - k + i]; // copy last k elements
    }
    for(int i = n - k - 1; i >= 0; i--){                             // Step 2: Shift remaining elements right
        arr[i + k] = arr[i]; // move element k places right
    }
    for(int i = 0; i < k; i++){                       // Step 3: Copy temp to beginning
        arr[i] = temp[i]; // place saved elements
    }
    cout << "Right Rotated Array = ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
