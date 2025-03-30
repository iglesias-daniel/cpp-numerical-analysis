#ifndef NUMERICAL_ANALYSIS_LOG_H
#define NUMERICAL_ANALYSIS_LOG_H

#include <stdio.h>

#ifdef LOGGING_ENABLED
    #define LOG_ERROR(msg, ...) fprintf(stderr, "[ERROR] " msg "\n", ##__VA_ARGS__);
#else
    #define LOG_ERROR(msg, ...) // Logging disabled
#endif

#endif // NUMERICAL_ANALYSIS_LOG_H