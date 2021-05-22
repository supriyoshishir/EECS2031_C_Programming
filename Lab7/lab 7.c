#include <stdio.h>
#include <stdlib.h>

int n;
int A[50][50], T[50][50];

void path()
{
int i, j, k;
for(i=0; i<n; i++)
	for(j=0; j<n; j++)
		T[i][j] = A[i][j];
		for(k=0; k<n; k++)
			for(i=0; i<n; i++)
				for(j=0; j<n; j++)
					if(T[i][k] == 1 && T[k][j] == 1) 
					T[i][j] = 1;
}

void main()
{
	FILE *input = fopen("in71.txt","r+");
	
	int i, j;
	scanf("%d", &n);

	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			scanf("%d", &A[i][j]);
			path();
			
	for(i=0; i<n; i++){
		for(j=0; j<n; j++)
		fprintf(input,"%d   ", T[i][j]);
		fprintf(input, "\n");
	}
	fclose(input);
}
