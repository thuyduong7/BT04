#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int girl[n],boy[n];
    int count = 0;
    for (int i = 0; i < n; i++){
        cin >> girl[i] >> boy[i];
        if (girl[i] > boy[i]) count++;
    }
    if (count){
        sort(girl,girl+n);
        sort(boy,boy+n);
        for (int i = 0; i < n; i++){
            if (girl[i] > boy[i]){
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
    }
    else cout << "YES";
    return 0;
}
