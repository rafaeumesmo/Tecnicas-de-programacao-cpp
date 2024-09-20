#include <iostream>

unsigned long long bitswap(unsigned long long N, int P, int Q) {
    int bitP = (N >> P) & 1;  
    int bitQ = (N >> Q) & 1;  
    
    if (bitP != bitQ) {
        N ^= (1ULL << P);  
        N ^= (1ULL << Q);  
    }
    
    return N;
}

int main() {
    int T;
    std::cin >> T; 
    
    while (T--) {
        unsigned long long N;
        int P, Q;
        std::cin >> N >> P >> Q; 
        std::cout << bitswap(N, P, Q) << std::endl; 
    }
    
    return 0;
}
