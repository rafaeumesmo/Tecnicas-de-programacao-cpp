#include <iostream>
#include <string>

using namespace std;

int main() {
    int numCasos;
    cin >> numCasos;

    while (numCasos--) {
        string str1, str2, resultado;
        cin >> str1 >> str2;

        for (int i = 0; i < str1.length(); ++i) {
            if (str1[i] == str2[i]) {
                resultado += toupper(str2[i]);
            } else {
                resultado += tolower(str2[i]);
            }
        }

        cout << resultado << endl;
    }

    return 0;
}