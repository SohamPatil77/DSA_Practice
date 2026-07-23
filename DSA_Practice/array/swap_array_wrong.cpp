# include<iostream>
using namespace std;
int main (){
    int arr[] = {10,20,30,40};
    int n = 4;
    int start = 0;
    int end = n-1;
    arr[start] = 0;
    arr[end] = n-1;
    int temp=arr[start];                           //this is wrong

    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;

    for (int i=0 ; i<n ; i++){
        cout << arr [i] << endl ;
    }

}
