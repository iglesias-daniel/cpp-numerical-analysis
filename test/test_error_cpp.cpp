#include <iostream>
extern "C" {
    #include "../include/error.h"
}

int main() {
    double real = 10.0;
    double approx = 9.8;

    double error = absolute_error(approx, real);
    std::cout << "Absolute error C++: " << error << std::endl;

    return 0;
}
