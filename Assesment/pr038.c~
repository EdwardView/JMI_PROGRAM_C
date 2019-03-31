#include<stdio.h>
int main()
{
	int i,row,row1,col1,col,k=0,l=0,arr[10][10],count=0;
	printf("Entre the row and column oof matrix : ");
	scanf("%d%d",&row,&col);
	row1=row;
	col1=col;
	printf("entre the element of matrix :");
/*	for(i=0; i<row; i++)
		for(k=0; k<col; k++)
			scanf("%d",&ar[i][j]);
	for(i=0; i<row; i++)
       	{
	       for(k=0; k<col; k++)
                      printf("%d ",ar[i][j]);
	printf("\n");
	}*/
	printf("----SPIRAL MATRIX------\n");
	while(k < row && l < col)
	{
		for(i=k; i<col; i++)
			arr[k][i]=++count;
		k++;
		for(i=k; i<row; i++)
			arr[i][col-1]=++count;
		col--;
		if(k < row)
		{
			for(i=col-1; i>=l; i--)
				arr[row-1][i]=++count;
		row--;
		}
		if(l < col)
		{
			for(i=row-1; i>=k; i--)
				arr[i][l] = ++count;
		l++;
		}
	}	
	for(i=0; i<row1; i++)
	{
                for(k=0; k<col1; k++)
                     printf("%d\t",arr[i][k]);
	printf("\n");
	}
	return 0;
}

	
		
