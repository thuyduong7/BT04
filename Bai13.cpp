#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n,count = 0;
        cin >> n;
        int a[n];
        a[0] = 0;
        for (int j = 1; j <= n; j++){
            cin >> a[j];
            a[j] += a[j-1];
        }
        for (int j = 0; j < n; j++){
            if (a[n] - a[j+1] == a[j]){
                cout << "YES" << endl;
                break;
            } else count++;
        }
        if (count == n) cout << "NO" << endl;
    }
    return 0;
}
