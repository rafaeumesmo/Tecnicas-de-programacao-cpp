#include <iostream>
#include <bitset>
#include <vector>
using namespace std;

// Função para verificar se um número é primo
bool ehPrimo(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Função para contar os bits 1 na representação binária de um número
int contarBits1(unsigned long long V) {
    return bitset<64>(V).count();  // Converte para binário e conta os bits 1
}

int main() {
    int N;
    cin >> N;  // Número de casos de teste
    while (N--) {
        unsigned long long V;
        cin >> V;
        
        // Contar quantos bits 1 existem na representação binária de V
        int bits1 = contarBits1(V);
        
        // Verificar se o número de bits 1 é primo
        if (ehPrimo(bits1)) {
            cout << V << " eh um pribit" << endl;
        } else {
            cout << V << " nao eh um pribit" << endl;
        }
    }
    
    return 0;
}
