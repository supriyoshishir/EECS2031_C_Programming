#include <stdio.h>
int puz[4][4]= {5,8,7,11,1,6,12,2,9,0,13,10,14,3,4,15};
void disp()
{
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%5d ",puz[i][j]);
		}
		printf("\n");	
	}	
}
int result()
{

		int i,j,count=1;
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				if(puz[i][j]==count)
					count++;
				else if(puz[3][3]==0)
					return 1;
				
			}
		}	
}

int swap(int row, int col, int mov)
{
	int temp;
	temp = puz[row][col];

	switch (mov)
	{
		case 1:
		{
			if(row==0)
				printf("Not a valid move\n");
			else
				puz[row][col]=puz[row-1][col];
				puz[row-1][col]=temp;
			break;
		}
		case 2:
		{
			if(row==3)
				printf("Not a valid move\n");
			else
				puz[row][col]=puz[row+1][col];
				puz[row+1][col]=temp;
			break;
		}
		case 3:
		{
			if(col==3)
				printf("Not a valid move\n");
			else
				puz[row][col]=puz[row][col+1];
				puz[row][col+1]=temp;
			break;
		}
		case 4:
		{
			if(col==0)
				printf("Not a valid move\n");
			else
				puz[row][col]=puz[row][col-1];
				puz[row][col-1]=temp;
			break;
		}
	}
	
	
}

void main ()
{
	int row,col,mov;
	disp();
	while(0<5)
	{
		int i,j;
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				if(puz[i][j]==0)
				{
					col=j;
					row=i;
				}
			}	
		}	
		
		printf("To be moved? Above:u Below:d Right:r Left:l Exit:-1\n");
		scanf("%s",&mov);
		if(mov<0)
			break;
		swap(row,col,mov);
		disp();
		if(result()==1)
		{
			printf("You Won!!!\n");
			break;
		}
			
	
	}
}
