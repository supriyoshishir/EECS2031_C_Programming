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

//function used to move the numbers in the grid
void moveNumbers(){
     int key;
     printf("\n\nEnter a letter(u, d, l, r, q): ");
     key = getchar();
     if(key == 'u')
          moveUp();
     if(key == 'd')
          moveDown();   
     if(key == 'l')
          moveLeft();
     if(key == 'r')
          moveRight(); 
     displayTable();  
}
 
//moves the number to the right
void moveRight(){
    int temp,i,j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(table[i][j] == 0 && j != 0){
                temp = table[i][j-1];
                table[i][j-1] = 0;
                table[i][j] = temp;
            }
        }
    }
} 
 
//moves the number to the left
void moveLeft(){
    int temp,i,j;
    for(i = 3; i >= 0; i--){
        for(j = 3; j >= 0; j--){
            if(table[i][j] == 0 && j != 3){
                temp = table[i][j+1];
                table[i][j+1] = 0;
                table[i][j] = temp;
            }
        }
    }
} 
 
//moves the number up
void moveUp(){
    int temp,i,j;
    for(i = 3; i >= 0; i--){
        for(j = 3; j >= 0; j--){
            if(table[i][j] == 0 && i != 3){
                temp = table[i+1][j];
                table[i+1][j] = 0;
                table[i][j] = temp;
            }
        }
    }
}   
 
//moves the number down
void moveDown(){
    int temp,i,j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(table[i][j] == 0 && i != 0){
                temp = table[i-1][j];
                table[i-1][j] = 0;
                table[i][j] = temp;
            }
        }
    }
}   
 
//function used to display the table 
void displayTable(){
    int i,j;
    for(i = 0; i < 4; i++){
        printf("\n\n");
        for(j = 0; j < 4; j++){
            if(table[i][j] == 0)
                printf("      ");
            else if(table[i][j] < 10)
                printf(" %d    ",table[i][j]);  
            else
                printf("%d    ",table[i][j]);
        }
    }
    printf("\n");   
}