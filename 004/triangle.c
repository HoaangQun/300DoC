#include "triangle.h"

bool check(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

const char* type(double a, double b, double c) {
    if (!check(a, b, c)) {
        return "Khong phai tam giac";
    }

    if (a == b && b == c) {
        return "Tam giac deu";
    }

    if (a == b || a == c || b == c) {
        return "Tam giac can";
    }

    if (fabs(pow(a, 2) + pow(b, 2) - pow(c, 2)) < 1e-6 ||
        fabs(pow(a, 2) + pow(c, 2) - pow(b, 2)) < 1e-6 ||
        fabs(pow(c, 2) + pow(b, 2) - pow(a, 2)) < 1e-6) {
        return "Tam giac vuong";
    }

    return "Tam giac thuong";
}

double Heron(double a, double b, double c) {
    if (!check(a, b, c)) {
        return -1;
    }
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

