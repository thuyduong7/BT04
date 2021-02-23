#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n],b[n+1];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i <= n; i++){
        cin >> b[i];
    }
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <n; j++){
            if (b[i] == a[j]){
                a[j] = -1;
                break;
            }
            if (j == n-1){
                cout << b[i];
                return 0;
            }
        }
    }
    return 0;
}
