#include "../include/root_finding.h"
#include "../include/error.h"
#include "../include/log.h"


double bisection(double (*func)(double), double sup_lim, double inf_lim, int n, double tol) {
    int i = 0;
    double solucion = 0;
    double fun_i, fun_m, fun_s, mid;

    //Aplicabilty of bisection method
    if (func(inf_lim)*func(sup_lim) >= 0){
        LOG_ERROR("Product between images needs to be more or equal 0.");
        return -1;
    } 

    //Bisection method
    while (1)
    {
        i++;

        mid = (sup_lim + inf_lim)/2;
        fun_i = func(inf_lim);
        fun_m = func(mid);
        fun_s = func(sup_lim);

        // Stop time?
        if (absolute_error(fun_m,0) <= tol) {
            return mid;
        }

        if (i==n) {
            return mid;
        }

        if (fun_i*fun_m < 0){
            sup_lim = mid;
        } else {
            inf_lim = mid;
        }

    }
    
}