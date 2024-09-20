#include <iostream>
#include <cstdint>


int main() {
    uint32_t N;  
    std::cin >> N;

    uint32_t resultado = 0; 

    for (int i = 0; i < 32; ++i) {
        resultado = (resultado << 1) | (N & 1);
        N >>= 1;
    }

    std::cout << resultado << std::endl; 

    return 0;
}
