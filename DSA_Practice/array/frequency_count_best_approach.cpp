#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,1,3,2,2};
    int n = 6;
    int target1 = 0;
    int target2 = 0;
    int target3 = 0;

    for (int i=0 ; i<n ; i++){                    //best approach to solve this problem
        if(arr[i] == 1 ){
            target1++;
        }
        else if(arr[i] == 2 ){
            target2++;
        }
        else if(arr[i] == 3 ){
            target3++;
        }
    }

    cout<<"1 = "<< target1 << "times"<< endl;
    cout<<"2 = "<< target2 << "times"<< endl;
    cout<<"3 = "<< target3 << "times"<< endl;

}
