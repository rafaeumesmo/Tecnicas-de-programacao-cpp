#include <iostream>

int main() {
    int N, B;
    std::cin >> N >> B; 

    for (int i = 0; i < N; ++i) {
        int V;
        std::cin >> V; 
        int mask = ~(1 << B);
        
        int resultado = V & mask;

        std::cout << resultado << std::endl;
    }

    return 0;
}
