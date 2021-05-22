#include <stdio.h>

int main() {
    int LENGTH = 6, SIZE = 30;
    int i, n, units;
    float cost, sum = 0;
    char ID[LENGTH];
    
    scanf("%d", &n);

    for (i = 0; i < n && i < SIZE; i++) {
        scanf("%s", ID);
        scanf("%f", &cost);

        (getchar() == '\n') ? (units = ' ') : scanf("%d", &units);
        sum += (cost * units);
    }

    printf("%.2f\n", sum);
}