#include <stdio.h>
#include "math/math.h"

int main() {
    int a = 10;
    int b = 4;

    double c = 10.0;
    double d = 4.0;

    printf("La somma tra %d e %d è: %d \n", a, b, sum(a, b));
    printf("La sottrazione tra %d e %d è: %d \n", a, b, sub(a, b));
    printf("La moltiplicazione tra %d e %d è: %d \n", a, b, mult(a, b));
    printf("La divisione tra %f e %f è: %f \n", c, d, div(c, d));

    return 0;
}