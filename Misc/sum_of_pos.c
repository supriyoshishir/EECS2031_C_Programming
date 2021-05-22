#include <stdio.h>

int main()
{
	int i, c, sum = 0, pos_exists = 0, pos_count = 0;
    	float avg = 0;

    	for (i = 0; scanf("%d", &c) != EOF; i++) {
        if (c > 0) {
	pos_exists = 1;
        sum += c;
	pos_count++;
	}
	avg = (sum / pos_count);
    }

    (pos_exists) ? printf("%6.2f\n", avg) : printf("No positive numbers\n");
}
