#include <stdio.h>
//include "../include/log.h"
#include "../include/error.h"


int main() {
    double real = 10.0;
    double approx = 9.8;

    double error = absolute_error(approx,real);
    printf("Absolute error: %f\n", error);

    double error_rel = relative_error(approx, 0);
    printf("Relative error: %f\n", error_rel);

    return 0;
}