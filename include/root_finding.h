#ifndef NUMERICAL_ANALYSIS_ROOT_FINDING_H
#define NUMERICAL_ANALYSIS_ROOT_FINDING_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief finds the root by bisection method
 * 
 * @param func Function
 * @param sup_lim Superior limit
 * @param inf_lim Inferior limit
 * @param n Max number of iteration
 * @param tol Min tolerance
 * @return double Mid value
 */
double bisection(double (*func)(double), double sup_lim, double inf_lim, int n, double tol);







#ifdef __cplusplus
}
#endif

#endif // NUMERICAL_ANALYSIS_ROOT_FINDING_H