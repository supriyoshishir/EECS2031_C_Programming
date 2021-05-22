#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i, j, k, l, a[50][50];
	
	scanf("%d %d", &k, &l);
	
	for(i=0; i<4; i++) {
		for(j=0; j<4; j++) {
			if(i==k && j==l) {
				a[i][j] = 100;
			}
			else {
				scanf("%d", &a[i][j]);			
			}		
		}
	}
	
	for(i=0; i<4; i++) {
		for(j=0; j<4; j++) {
			if(i==k && j==l) {
				printf("    ");	
			}
			else {
				printf("%-4d", a[i][j]);	
			}
		}	
		printf("\n");
	}
}
