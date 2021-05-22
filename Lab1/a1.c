#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){

    int len;
    int count = 0;
    int sum = 0;
    int shift;
    int x= INT_MAX;

    scanf("%d", &len);
    int a[len];
    int b[len];
    int i;

    for (i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < sizeof(b)/sizeof(b[0]); i++) {
        scanf("%d", &b[i]);
    }

    while (count <= len-1) {
        for (i = 0; i <= len-1; i++) {
            sum += abs(a[i] - b[i]);
        }

        if (sum < x) {
            x = sum;
            shift = count;
        }

        sum = 0;
        int p = b[len-1];
        for (i = len-1; i > 0; i--) {
            b[i] = b[i-1];
        }
        b[0] = p;
        count++;
    }
    printf("%d\n", shift);
    return 0;
}
