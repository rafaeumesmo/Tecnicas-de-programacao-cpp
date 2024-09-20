#include <iostream>
class A {
    public:
    int a;
};


int main(){
int i {10}, j {10};
int p {i + j};
    
    std::cout << p << "\n";

    if (p == 20){
        std::cout << "pao com ovo eh muito bom"<< "\n";
    }

    return 0;
}