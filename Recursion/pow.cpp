#include <iostream>
using namespace std;

double myPow(double x, int n){
    long long power = n;
    if (power < 0){
        power = -power;
    }
    double result = 1;
    for (long long i =0; i<power; i++){
        result *=x ;
    }
    if (n<0){
        return 1 / result;
    }
    return result;
}
int main (){
    double x;
    int n ;

    cout << "enter x";
    cin >> x ;

    cout << "enter n: ";
    cin >> n;

    cout << "answer = " << myPow(x,n)<< endl;

    return 0 ;
}

//  optimal _--------------------------------------------------


class Solution {
public:
    double myPow(double x, int n) {

        long long power = n;

        if (power < 0)
        {
            x = 1 / x;
            power = -power;
        }

        double ans = 1;

        while (power > 0)
        {
            if (power % 2 == 1)
            {
                ans = ans * x;
            }

            x = x * x;
            power = power / 2;
        }

        return ans;
    }
};