#include <iostream>
using namespace std;

void elementsum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout<<"sum of arr = " << sum <<endl;
}
int main(){
    int arr[]={2,3,4,1,5};
    int n = 5;
    elementsum(arr,n);
    return 0;
}
