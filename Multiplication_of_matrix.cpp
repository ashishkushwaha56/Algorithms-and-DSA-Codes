#include <iostream>

using namespace std;

int main(){
    int m1, n1, m2, n2;
    cout<<"Enter the number of rows  and columns in first matrix: "<<endl;
    cin>>m1>>n1;
    cout<<"Enter the number of rows  and columns in second matrix: "<<endl;
    cin>>m2>>n2;

    int a[m1][n1], b[m2][n2];

    if(m1 !=n2 && m2 !=n1){
        cout<<"Multication cannot be done becouse dimensions of matrix! "<<endl;
        return 0;
    }
    cout<<"Enter the elements in first matrix: "<<endl;
    for(int i = 0; i < m1; i++){
        for(int j = 0; j < n1; j++){
            cin>>a[i][j];
        }
    }
    cout << "Enter the elements in second matrix: " << endl;
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> b[i][j];
        }
    }

    cout << "Elements of first matrix: " << endl;
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout << "Elements of second matrix: " << endl;
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    int c[m1][n2];
    for(int i = 0; i<m1; i++){
        for(int j = 0; j < n2; j++){
            int sum = 0;
            for(int k = 0; k<n1; k++){
                sum = sum + a[i][k]*b[k][j];
            }
            c[i][j] = sum;
        }
    }

    cout << "------------------" << endl;
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}