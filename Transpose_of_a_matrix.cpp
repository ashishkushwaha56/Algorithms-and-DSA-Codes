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

    int temp = m;
    m = n;
    n = temp;

    int b[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            b[i][j] = a[j][i];
        }
    }

    cout<<"Transpose matrix is: "<<endl;
    for(int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}
