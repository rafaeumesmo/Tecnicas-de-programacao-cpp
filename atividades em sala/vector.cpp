#include <iostream>
#include <vector>

int main() {

// std::vector<int> vet{5, 4, 3, 2, 1};
// std::vector<int>::iterator it;

//for (it = vet.begin(); it != vet.end(); ++it) {
//    std::cout << "-> " << *it << std::endl;}

//std::cout << "Qde " << vet.size() << std::endl; //!quantidade de intens 

std::vector<std::vector<double>> vet = {
                            {1.1, 2.2, 3.3},
                            {2.1, 1.2, 0.3},
};
std::vector<std::vector<double>> itl;

for (itl = vet.begin(); itl != vet.end(); ++itl) {
    std::vector<double> it2;
    for (it2 = *(itl).begin(); it2 != *(itl).end(); ++it2) {
        //imprime
    }

}


    return 0;
}