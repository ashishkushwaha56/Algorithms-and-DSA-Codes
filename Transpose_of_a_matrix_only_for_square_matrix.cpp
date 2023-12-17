#include <iostream>
using namespace std;

int main() // Main function
{
    int m, n; // user will enter the dimension of matrix
    cout << "Enter the row and column in matrix: " << endl;
    cin >> m >> n;
    int a[m][n]; // matrix declaratio
    cout << "Enter the elements in matrix: " << endl;
    for (int i = 0; i < m; i++) // user will enter each element of matrix
        for (int j = 0; j < n; j++)    
            cin >> a[i][j];
        
    cout << "Elements of matrix are: " << endl;
    for (int i = 0; i < m; i++) //for printing the elements of matrix before transposing it
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < m; i++) // For swapping the non-diagonal elements
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                int temp = 0;
                temp = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = temp;
            }
        }
    }
    cout << "Elements of transpose matrix of a is: " << endl;
    for (int i = 0; i < m; i++) // printing the elements after transpose
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}