#ifndef triangle_h
#define triangle_h

#ifdef __cplusplus
extern "C" {
#endif

#include <math.h>
#include <stdbool.h>

bool check (double a, double b, double c);

const char* type (double a, double b, double c);

double Heron (double a, double b, double c);

#ifdef __cplusplus
}

#endif

#endif
