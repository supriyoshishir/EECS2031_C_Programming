#include <stdio.h>

int main() {

    int i, SIZE = 50;
    char str[SIZE];
    fgets(str, SIZE + 1, stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (i > 0 && str[i] == str[i - 1])
	break;
    }

    str[i] = str[i - 1];
    printf("%d\n", i - 1);
}