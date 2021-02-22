#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int l = s.length();
    for (int i = 0; i < l; i++){
        for (int j = 0; j < l; j++){
            cout << s[i] << s[j] << ' ';
            for (int k = j; k < l; k++){
                for (int m = 0; m < l; m++){
                    cout << s[i] << s[k] << s[m] << ' ';
                }
                break;
            }
        }
    }
    return 0;
}
