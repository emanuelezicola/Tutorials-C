#include <stdio.h>
#include <stdbool.h>

int main() {
    //Come dichiarare variabili

    //Stringhe
    char stringaDaStampare[] = "Hello, World!";
    printf("%s \n", stringaDaStampare);

    //interi
    int a = 10;
    printf("%d \n", a);

    //double
    double b = 4.3;
    printf("%f \n", b);

    //booleani. con uso di stdbool.h
    bool boolTrue = true;
    printf("%s", boolTrue ? "true" : "false");

    return 0;
}
