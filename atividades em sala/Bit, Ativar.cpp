#include <iostream>

int main() {
    int N, B;
    std::cin >> N >> B;

    for (int i = 0; i < N; ++i) {
        int V;
        std::cin >> V;

        V = V | (1 << B);

        std::cout << V << std::endl;
    }

    return 0;
}