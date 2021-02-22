#include <iostream>
#include <ctime>
using namespace std;
bool symmetry(string a, string b){
    int l1 = a.length();
    int l2 = b.length();
    if (l1 != l2) return false;
    for (int i = 0; i < l1/2; i++){
        if (a[i] != b[l1-i-1]) return false;
    }
    return true;
}
int a[5][5];
int main()
{
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++){
        cin >> s[i];
    }
    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            if (symmetry(s[i],s[j])){
                cout << s[i].length() << ' ' << s[i][s[i].length()/2];
                return 0;
            }
        }
    }
}
