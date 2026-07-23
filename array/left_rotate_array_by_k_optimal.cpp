#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    int arr[] = {1,2,3,4,5,6,7}; // original array
    int n = 7; // size of array
    int k = 3; // rotate by 3 places

    reverse(arr, arr + k); // reverse first k elements
    reverse(arr + k, arr + n); // reverse remaining elements
    reverse(arr, arr + n); // reverse whole array

    cout << "Left Rotated Array = ";
    for(int i = 0; i < n; i++){ // print array
        cout << arr[i] << " ";
    }
    return 0;
}
