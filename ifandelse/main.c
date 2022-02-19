#include <stdio.h>

int main() {
    //se a > 10 stampo hello World!, altrimenti stampo Goodbye World!

    int a = 0;

    printf("Per favore, inserisci un intero: \n");
    scanf("%d", &a);

    if (a > 10) {
        printf("Hello, World!");
    } else {
        printf("Goodbye, World!");
    }

    return 0;
}
