#include <iostream>
using namespace std;

int main (){
    int arr[] = {10,20,30,40};
    int  n = 4;
    int start = 0 ;
    int end = n-1 ;

    while( start < end ){                                   //this is correct
        int temp = arr[start];
        arr[start] = arr[end];
        arr [end] = temp;

        start++ ;
        end-- ;
    }
    for (int i = 0; i<n ; i++){
        cout << arr[i] <<" ";
    }

}
