#include "../include/error.h"

double absolute_error(double approx, double real) {
    double abs_error;

    abs_error = real - approx;
    if (abs_error < 0) abs_error = -abs_error;

    return abs_error;
}
