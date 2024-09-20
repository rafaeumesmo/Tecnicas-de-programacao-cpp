#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int x = 3;
    switch (x) {
        case 1 :
        std::cout << "gay ";
        break;

        case 2 :
        std::cout << "very gay ";
        break;

        case 3 :
        std::cout << "THE GAY ";
        break;

        default:
        break;

    }
    return 0;
}