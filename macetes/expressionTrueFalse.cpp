#include <iostream>
int main() {
    int time = 20;

    //! variable = (condition) ? expressionTrue : expressionFalse;
    std::string resultado = (time < 18) ? "good day " : "good everning. ";
    std::cout << resultado ;

    return 0;
}
