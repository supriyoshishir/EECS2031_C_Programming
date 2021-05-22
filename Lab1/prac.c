#include <stdio.h> 

void main(){

	int i, num, list;
	scanf("%d\n", &num);

	int x[num];
	for (i=0; i<num; i++){		
	scanf("%d", &list);
	x[i] = list;
	}

	int y[num];
	for (i=0; i<num; i++){		
	scanf("%d", &list);
	y[i] = list;
	}

	void rotate (int arr[]){
	int temp = arr[0],j;
	for (j=0; j<num-1; j++){
		arr[j] = arr[j+1];
		}
		arr[j] = temp;
	}





printf("%d\n", save_rotation);
return 0;
}
