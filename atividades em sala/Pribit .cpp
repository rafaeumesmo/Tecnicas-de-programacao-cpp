#include <iostream>

bool primo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int contarBits1(unsigned long long n) {
    int count = 0;
    while (n > 0) {
        count += (n & 1);  
        n >>= 1;           
    }
    return count;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N;
    std::cin >> N;  
    for (int i = 0; i < N; i++) {
        unsigned long long V;
        std::cin >> V;  

        int bits1 = contarBits1(V);

        if (primo(bits1)) {
            std::cout << V << " eh um pribit\n";
        } else {
            std::cout << V << " nao eh um pribit\n";
        }
    }

    return 0;
}
