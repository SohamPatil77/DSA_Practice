#include <iostream>
using namespace std;
int main(){
    int arr[]={23,4,1,5,66};
    int n = 5;
    int smallest = arr [0];

    for(int i=0 ; i<n ; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    cout << "smallest element = "<<smallest << endl ;
    return 0;
}
