#include <iostream>
#include <climits>

using namespace std;

int main(){

    int arr[] = {1,2,3,4,5};

    int n = 5;

    int largest = INT_MIN;

    for(int i = 0; i < n; i++){

        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    cout << "largest element = " << largest << endl;

    return 0;
}
