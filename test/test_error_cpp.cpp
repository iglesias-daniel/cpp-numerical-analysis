#include <iostream>
extern "C" {
    //#include "../include/log.h"
    #include "../include/error.h"
}

int main() {
    double real = 10.0;
    double approx = 9.8;

    double error = absolute_error(approx, real);
    std::cout << "Absolute error C++: " << error << std::endl;

    double error_rel = relative_error(approx, 0);
    std::cout << "Relative error C++: " << error_rel << std::endl;

    return 0;
}
