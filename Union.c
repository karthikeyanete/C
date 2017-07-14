#include <stdio.h>
int main() {
	int row,column,i,j,hash[100]={0},count=0,value=0;
	scanf("%d %d",&row,&column);
	int array[row][column];
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",&array[i][j]);
			if(	hash[array[i][j]]==i)
			{
				hash[array[i][j]]++;
				if(	hash[array[i][j]] > count)
				{
					count = hash[array[i][j]];
					value = array[i][j];
				}
			}
		}
	}
	if(column == count)
	{
		printf("The Repeated Element is %d",value);
	}
	else
	{
		printf("No Elements are repeated");
	}
	return 0;
}
