#include <stdio.h>

int main() {

    const int SIZE = 40;
    char str[SIZE];
    int i, valid;

    for (valid = 1; scanf("%s", str) != EOF; valid = 1) {
        if (isdigit(str[0])) {
            for (int i = 1; str[i] != '\0'; i++) {
                if (isdigit(str[i])) valid = 0;
            }
        } else {
            for (int i = 1; str[i] != '\0'; i++) {
                if (isupper(str[i])) valid = 0;
            }
        }

        printf(valid ? "VALID\n" : "INVALID\n");
    }
}