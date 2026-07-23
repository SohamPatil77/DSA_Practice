#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,3,4,5,7};
    int n = 5;
    int maxi = arr[0];

    for (int i=1 ; i<n ; i++){
        if (arr[i] > maxi);{
        maxi = arr[i];
        }
    }
    cout<<"largest element = "<< maxi ;
    return 0;
}
