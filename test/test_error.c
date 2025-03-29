#include <stdio.h>
#include "../include/error.h"

int main() {
    double real = 10.0;
    double approx = 9.8;

    double error = absolute_error(approx,real);
    printf("Absolute error: %f\n", error);

    return 0;
}