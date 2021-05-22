#include <stdio.h> 

int difference(int a[], int b[], int N)

{
	int temp=0;
	int i;
	for (i=0 ; i<N; i++)
		temp += (a[i] - b[i]);
	return temp;
}

int main()
{

	int i, j, N, a[100], b[100];
	int value = 500000;

	int save_rotation;
	int save_end;

	scanf("%d", &a[i]);
	for (i=0; i<N; i++)

	scanf("%d", &b[i]);
	for (i=0; i<N; i++)

	{
		if (value > difference (a, b, N))
			{
				value = difference (a, b, N);
				save_rotation = i;
			}
		save_end = b[N-1];
		for (j=N-1; j>0; j--)
			{
				b[j] = b[j-1];
			}
		b[0] = save_end;
	}

	printf("%d\n", save_rotation);
	return 0;
}

