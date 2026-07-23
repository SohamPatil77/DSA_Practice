#include <iostream>

using namespace std;

int main(){

    int arr[] = {1,2,0,5,0,6}; // original array

    int n = 6; // size of array

    int j = -1; // stores index of first zero

    // Step 1: Find first zero
    for(int i = 0; i < n; i++){ // traverse array

        if(arr[i] == 0){ // first zero found

            j = i; // store its index

            break; // no need to search further
        }
    }

    // If no zero exists, array is already correct
    if(j == -1){

        cout << "No zeros found." << endl;

        for(int i = 0; i < n; i++){ // print original array

            cout << arr[i] << " ";
        }

        return 0;
    }

    // Step 2: Move non-zero elements to the left
    for(int i = j + 1; i < n; i++){ // start after first zero

        if(arr[i] != 0){ // if current element is non-zero

            int temp = arr[i]; // store current element

            arr[i] = arr[j]; // move zero to current position

            arr[j] = temp; // move non-zero to first zero position

            j++; // next zero position
        }
    }

    cout << "Final Array = ";

    for(int i = 0; i < n; i++){ // print final array

        cout << arr[i] << " ";
    }

    return 0;
}
