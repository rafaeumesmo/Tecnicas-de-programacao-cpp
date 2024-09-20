#include <iostream>
#include <cstdint>

int homming(uint64_t &m, uint64_t &u) {
    unsigned long long int x = m ^ u;
     int count = 0;

     while (x) {
        count += x & 1;
        x >>= 1;
     }

    return count;
}

int main() {
    std::ios_base::sync_with_stdio(false); //otimiza 
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int n;
    std::cin >> n;

   for (int i = 0; i < n; ++i) {
        uint64_t m , u;
        std::cin >> m >> u; 

        std:: cout << homming (m, u) << "\n";
    }


    return 0;
}