// AAA
// BBB
// CCC

#include <iostream>
using namespace std;

int main (){
    char ch = 'a';
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<ch;
        }
        cout<<endl;
        ch++;
    }
    return 0;
}
