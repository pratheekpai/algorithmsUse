#include <iostream>

using namespace std;

int main()
{
    int a[10][10], b[10][10], c[10][10], i, j, m, n, q, p, k;
    cout<<"Enter m and n: \n";
    cin>>m>>n;
    cout<<"\nEnter the matrix 1 elements : \n";
    for(i=0; i<m; ++i)
        for(j=0; j<n; ++j)
            cin>>a[i][j];
    cout<<"Enter q and p: \n";
    cin>>q>>p;
    cout<<"\nEnter the matrix 2 elements : \n";
    for(i=0; i<n; ++i)
        for(j=0; j<p; ++j)
            cin>>b[i][j];


    for(i=0; i<m; ++i){

        for(j=0; j<p; ++j){

            c[i][j] = 0;
            for(k=0; k<n; ++k){

                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout<<"\n\nGiven matrix1 : \n";
    for(i=0; i<m; ++i){
        cout<<"\n";
        for(j=0; j<n; ++j)
           cout<<a[i][j]<<"\t";
    }

    cout<<"\n\nGiven matrix2 : \n";
    for(i=0; i<n; ++i){

        cout<<"\n";
        for(j=0; j<p; ++j)
           cout<<b[i][j]<<"\t";
    }

    cout<<"\n\nProduct matrix : \n";
    for(i=0; i<m; ++i){
        cout<<"\n";
        for(j=0; j<p; ++j)
            cout<<c[i][j]<<"\t";
    }

    return 0;
}
