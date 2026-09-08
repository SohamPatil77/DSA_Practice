
// bruteforce approach


#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix)  // The & means reference.  This is our 2D matrix.
{
    int m = matrix.size();  //Find number of rows
    int n = matrix[0].size();     //Find number of columns

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)  //Check whether element is zero
            {
                for (int k = 0; k < n; k++)  //Mark the entire row
                {
                    if (matrix[i][k] != 0)   //Don't change existing zero
                    {
                        matrix[i][k] = -1;
                    }
                }

                for (int k = 0; k < m; k++)  //Mark the entire column
                {
                    if (matrix[k][j] != 0)  //Check the column element
                    {
                        matrix[k][j] = -1;
                    }
                }
            }
        }
    }

    for (int i = 0; i < m; i++)
    {                                   //Second traversal
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == -1)
            {
                matrix[i][j] = 0;
            }
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    setZeroes(matrix);

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}



// optimal solution ----------------------------------------------------


