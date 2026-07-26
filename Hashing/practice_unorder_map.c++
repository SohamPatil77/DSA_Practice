#include <iostream>
#include <unordered_map>

using namespace std;

int main(){

    unordered_map<string, int> student;

    student["Soham"] = 95;
    student["Rahul"] = 88;
    student["Aman"] = 91;

    cout << student["Rahul"] << endl;

    student["Rahul"] = 90;

    cout << student["Rahul"] << endl;

    return 0;
}