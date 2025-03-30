#ifndef NUMERICAL_ANALYSIS_ERROR_H
#define NUMERICAL_ANALYSIS_ERROR_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief gets the absolute error between two double.
 * 
 * @param approx Aproximated value
 * @param real Real value
 * @return double Absolute error
 */
double absolute_error(double approx, double real);

/**
 * @brief gets the relative error between two double.
 * 
 * @param approx Aproximated value
 * @param real Real value
 * @return double Relative error
 */
double relative_error(double approx, double real);

#ifdef __cplusplus
}
#endif

#endif // NUMERICAL_ANALYSIS_ERROR_H