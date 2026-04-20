#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int mat[n][n];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> mat[i][j];

    int mid = n/2;

    if(n%2==1){
        cout << mat[mid][mid];
    } else {
        for(int i=mid-1;i<mid+1;i++){
            for(int j=mid-1;j<mid+1;j++){
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
}