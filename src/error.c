#include "../include/error.h"
#include "../include/log.h"

double absolute_error(double approx, double real) {
    double abs_error;

    abs_error = real - approx;
    if (abs_error < 0) abs_error = -abs_error;

    return abs_error;
}

double relative_error(double approx, double real) {
    double rel_error;

    if (real != 0) {
        rel_error = (approx - real)/real;
        if (rel_error < 0) rel_error = -rel_error;
    } else {
        LOG_ERROR("Error: Division by zero in relative_error.");
        rel_error = -1;
    }

    return rel_error;
}