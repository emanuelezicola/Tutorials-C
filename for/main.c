#include <stdio.h>

int main() {
    int arrayInt[5] = {10, 18, 2123, 2334, 1452};

    printf("Con il for: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d: %d\n", i, arrayInt[i]);
    }


    printf("Con il while: \n");
    int i = 0;
    while (i < 5) {
        printf("%d: %d\n", i, arrayInt[i]);
        i++;
    }

    return 0;
}
