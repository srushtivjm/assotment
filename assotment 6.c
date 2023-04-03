#include<stdio.h>

main()
{
	int a[10][10],i,j,n1,n2,sum=0;
	printf("Enter value of row=");
	scanf("%d",&n1);
	printf("Enter value of column=");
	scanf("%d",&n2);
	
	if(n1==n2)
	{
		printf("Enter element for metrix.\n");
		for(i=0;i<n1;i++)
		for(j=0;j<n2;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("metrix.\n");
		for(i=0;i<n1;i++)
		{
			sum=sum+a[i][i];
			for(j=0;j<n2;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		printf("sum of elements=\n");
		
		printf("%d",sum);
	}
	else
	{
		printf("it is not squre metrix.");
	}
}
