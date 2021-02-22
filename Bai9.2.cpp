#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x[n],y[n];
    for (int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            if (x[i] == x[j] || y[i] == y[j] || x[i]+ y[i] == x[j]+y[j] || x[i]-y[i] == x[j]-y[j]){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
