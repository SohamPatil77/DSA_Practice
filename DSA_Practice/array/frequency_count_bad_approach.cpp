#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,1,3,2,2};
    int n = 6;
    int a=1;
    int b=2;
    int c=3;
    int target1 = 0;
    int target2 = 0;
    int target3 = 0;

    for (int i=0 ; i<n ; i++){                        //not a best approach to solve
        if(arr[i] == a ){
            target1++;
        }
        if(arr[i] == b ){
            target2++;
        }
        if(arr[i] == c ){
            target3++;
        }
    }

    cout<<"1 = "<< target1 << "times"<< endl;
    cout<<"2 = "<< target2 << "times"<< endl;
    cout<<"3 = "<< target3 << "times"<< endl;

}
