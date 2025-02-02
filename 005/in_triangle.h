#ifndef in_triangle_h
#define in_triangle_h

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <math.h>

double S_triangle(double x1, double y1, double x2, double y2, double x3, double y3);

void check_in(double S1, double S2, double S3, double Sf);

#ifdef __cplusplus
}

#endif

#endif
