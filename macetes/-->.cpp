#include <iostream>

int main() {    
    std::cout << "\n";
    int r (10);
    while (r > 0){
    --r; // r = r - 1; (logic)
        std::cout << r << " ";
    }

    std::cout << "\n";
    int x {10}; 
    while (x --> 0) {
        std::cout << x << " ";
    //! result 9 8 7 6 5 4 3 2 1 0
    }

    std::cout << "\n";

    int y {10};
    while (0 <---- y) {
        std::cout << y << " ";
    //! result 8 6 4 2 
    }

    std::cout << "\n";
    int z {100};
    while ( 0 <-------------------- z) {
        std::cout << z << " ";
    //! result 90 80 70 60 50 40 30 20 10 
    }





    return 0;
}