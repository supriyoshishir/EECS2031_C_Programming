#include <stdio.h>
#include <stdlib.h>

int main() {
    int SIZE = 250;
    char c, str[SIZE];
    int i, count = 0;

    for (i = 0; i < SIZE && scanf("%c", &c) != EOF; i++) {
        if (c != 'A' && c != 'C' && c != 'G' && c != 'T') {
            printf("Invalid sequence\n");
            exit(1);
        }
        str[i] = c;

        if (i >= 3 && str[i] == 'T' && str[i - 1] == 'G' && str[i - 2] == 'C' && str[i - 3] == 'A') {
            count++;
        }
    }

    printf("Valid sequence\n");
    printf("%d", count);
}