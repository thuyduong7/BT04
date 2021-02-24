#include <iostream>
#include <ctime>
using namespace std;
int a[5][5];
bool check(int* x, int* y, int i)
{
    for (int k = 0; k < i; k++){
        for (int j = k+1; j <= i; j++){
            if (x[k] == x[j] || y[k] == y[j] || x[k]+ y[k] == x[j]+y[j] || x[k]-y[k] == x[j]-y[j]){
                return false;
            }
        }
    }
    return true;
}
int main()
{
    srand(time(NULL));
    int randomX = rand() % 5;
    int randomY = rand() % 5;
    int x[5],y[5];
    x[0] = randomX;
    y[0] = randomY;
    for (int i = 1; i < 5; i++){
        bool correct = false;
        for (int j = 0; j < 5; j++){
            for (int k = 0; k < 5; k++){
                x[i] = j;
                y[i] = k;
                if (check(x,y,i)){
                    correct = true;
                    break;
                }
            }
            if (correct) break;
        }
    }
    for (int i = 0; i < 5; i++){
        a[x[i]][y[i]] = 1;
    }
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
