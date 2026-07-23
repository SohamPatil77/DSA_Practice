#include <iostream>
using namespace std;
int main (){
    int arr[]={1,3,4,5,7,8};
    int n = 6;
    int temp = arr[0];

    for (int i=0 ; i < n-1 ; i++){
        arr[i]=arr[i+1];
    }
    arr[n-1] = temp ;

    cout<<"rotated array"<<endl ;
    for(int i=0 ;i<n ; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
