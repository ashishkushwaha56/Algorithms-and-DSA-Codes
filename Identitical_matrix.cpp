#include <iostream>
using namespace std;

int main(){
    int m1,n1,m2,n2;
    cout<<"Enter the row and column in first matrix: "<<endl;
    cin>>m1>>n1;
    int a[m1][n1];
    cout<<"Enter the row and column in second matrix: "<<endl;
    cin>>m2>>n2;
    int b[m2][n2];

    if(!(m1==m2 && n1==n2)){
        cout<<"Matrix are not identical!";
        return 0;
    }
    cout<<"Enter the elements in first matrix: "<<endl;
    for(int i=0; i<m1; i++){
        for(int j = 0; j<n1; j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements in second matrix: "<<endl;
    for(int i=0; i<m2; i++){
        for(int j = 0; j<n2; j++){
            cin>>b[i][j];
        }
    }

    cout<<"Elements of first matrix are: "<<endl;
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Elements of second matrix are: "<<endl;
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

    int k =0;
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            if(a[i][j]!=b[i][j]){
                cout<<"Not identical "<<endl;
                break;
            }
            k++;
        }
    }
    if(k==(m1*n1)){
        cout<<"Matrix are identical";
    }
}