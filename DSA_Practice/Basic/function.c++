// // - What is a Function?  --------

// //  A function is a block of code that does one specific task.

// - function declaraion 
// Function declaration tells the compiler:

// “This function exists, its name, return type, and parameters.”

// // function defination ---------
// - we right void before function name that function dosent return anything 
// - int ,char . etc returns intiger value 

// ex : int main(){
//     return 0;
// }

// ex : 
// void printhello(){
//     cout << "hello";
// }

// //- full code :----------

// #include <iostream>
// using namespace std;
 
// void printhello(){         //function defination
//     std::cout <<"hello";
// }

// int main(){
//                            //function call
//     printhello();          //function name 
//     return 0;
// }

// // code for sum of 2 numbers: ---------

// #include <iostream>

// int sum(int a, int b){      // sum is fnction name  // call by value: call by values copies the values from actual parameters to the formal parameters
//     int s = a+b;                                    // here a,b are formal parameters 
//     return s;
// }
// int main(){
//     std::cout << sum(10,5); // 10 is value of a and 5 is value of b     // here 10,5 are actual parameters of a,b
//     return 0;
// }
 
//// code to calculate n factorial: ---------------

// #include <iostream>

// int factorialN(int n){
//     int fact = 1;

//     for(int i=1; i<=n; i++){
//         fact *= i;
//     }

//     return fact;
// }

// int main(){
//     std::cout << factorialN(4) << endl;
//     std::cout << factorialN(5) << endl;
//     return 0;
// }


// give power of a number ----------------------------

// #include <iostream>
// using namespace std;

// int power() {
//     int a,b;
//     cin >> a >> b ;

//     int ans = 1;

//     for (int i=1 ; i <= b ; i++){
//         ans=ans*a;
//     }
//     return ans;
// }

// int main(){
//     int ans = power();
//     cout<< "this is ans"<< ans <<endl;

//     return 0;
// }

// ------------------------------------------------------- find largest elements 

// #include <iostream>
// using namespace std;

// int findlargest (int arr[],int n){
//     int largest = arr[0];
//     for (int i=1 ;i<n ; i++){
//         if(arr [i] > largest){
//             largest = arr[i];

//         }
//     }
//     return largest;
// }
// int main(){
//     int arr[] = {1,2,4,5,2};
//     int n = 5;
//     int answer = findlargest (arr ,n );
//     cout <<"largest element = "<<answer;
//     return 0;
// }


















