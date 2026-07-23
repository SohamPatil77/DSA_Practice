#include <iostream>
#include <climits>

using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int smallest = INT_MAX;
    for (int i=0 ; i<n ; i++){
        if (arr[i]<smallest){
            smallest=arr[i];
        }
    }
    cout << "smallest element = " << smallest << endl;
    return 0;

}
