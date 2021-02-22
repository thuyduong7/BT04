#include <iostream>
using namespace std;
bool check(int** a, int n, int i, int j){
    for (int k = 0; k < n; k++){
        if (k != j && a[i][k] == 1) return true;
        if (k != i && a[k][j] == 1) return true;
    }
    int row = i, column = j;
    while (row && column){
        if (a[row--][column--] == 1) return true;
    }
    row = i, column = j;
    while (row < n-1 && column < n-1){
        if (a[row++][column++] == 1) return true;
    }
    row = i, column = j;
    while (row && column < n-1){
        if (a[row--][column++] == 1) return true;
    }
    row = i, column = j;
    while (row < n-1 && column){
        if (a[row++][column--] == 1) return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int **a = new int* [n];
    for (int i = 0; i < n; i++) *(a+i) = new int [n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            a[i][j] = 0;
        }
    }
    int x,y;
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        a[x][y] = 1;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i][j] == 1){
                if (check(a,n,i,j)){
                    cout << "YES";
                    return 0;
                }
            }
        }
    }
    cout << "NO";
    return 0;
}
