#include <iostream>

int main() {
    int T; 
    std::cin >> T;  
    while (T--) {
        unsigned int A, B, Y;
        std::cin >> A >> B >> Y;

        unsigned int C = A ^ B ^ Y;

        std::cout << C << std::endl;
    }

    return 0;
}
