#include <stdio.h>

int main() {
    char c;
    int num_whitespaces = 0, num_lines = 0;

    while (scanf("%c", &c) != EOF) {
        if (c == '\n') num_lines++;
        else if (c == ' ' || c == '\t') num_whitespaces++;
    }
    printf("Lines: %d\n", num_lines);
    printf("Whitespaces: %d\n", num_whitespaces);
}