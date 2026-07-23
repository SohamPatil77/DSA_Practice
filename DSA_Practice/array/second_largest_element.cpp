#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5};

    int n = 5;

    int largest = arr[0];
    int secondLargest = arr[0];

    for(int i = 0; i < n; i++){

        if(arr[i] > largest){

            secondLargest = largest;

            largest = arr[i];
        }

        else if(arr[i] > secondLargest && arr[i] != largest){

            secondLargest = arr[i];
        }
    }

    cout << "Largest element = " << largest << endl;

    cout << "Second Largest element = " << secondLargest << endl;

    return 0;
}
