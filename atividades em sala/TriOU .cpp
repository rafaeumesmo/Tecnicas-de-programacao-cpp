#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, Y;
        cin >> A >> B >> Y;

        int AB_or = A | B;

        if (AB_or > Y) {
            cout << -1 << endl;
        } 
        else {
            int C = Y - AB_or;
            if ((A | B | C) == Y) {
                cout << C << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}


