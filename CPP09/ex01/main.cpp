
#include "RPN.hpp"

int main(int argc, char **argv) {

    if (argc != 2) {
        std::cout << "You need one argument: Syntax => ./RPN \"numbers and operators\"" << std::endl;
        return -1;
    }

    RPN calculator;
    if (!calculator.start_Rpn(argv[1])) {
        return -1;
    }
    return 0;
}
