#include <stdio.h>

int main()
{
    int SIZE = 10;
    int i, array[SIZE], max_value = array[0], max_index = 0;

    for (i = 0; i < SIZE; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 1; i < SIZE; i++) {
        if (array[i] > max_value) {
            max_value = array[i];
            max_index = i + 1;
        }
    }

    printf("%d:%d\n", max_index, max_value);
	return 0;
}