#include <iostream>
namespace poo {
    int pee() {
        std::cout << "Took a poopee" << std::endl;
        return 0;
    }
}

namespace pee {
    int bum() {
        std::cout << "Took a piss" << std::endl;
        return 0;
    }
}

using namespace pee;
int main() {
    poo::pee();
    bum();
    return 0;
}