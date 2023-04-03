#include<stdio.h>

main()

{
	int i,j,n1,n2,a[100][100],b[100][100],c[100][100];
	
	printf("Enter value of row=");
	scanf("%d",&n1);
	printf("Enter value of column=");
	scanf("%d",&n2);
	
	printf("Enter element for first metrix.\n");
		for(i=0;i<n1;i++)
        for(j=0;j<n2;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[j][i]);
		}
	
	printf("first metrix=\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter element for second metrix.\n");
	for(i=0;i<n2;i++)
		for(j=0;j<n2;j++)
		{
			printf("b[%d][%d]=",i,j);
			scanf("%d",&b[j][i]);
			c[i][j]=a[i][j]+b[i][j];
		}
	printf("second metrix=\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	printf("Addition of metrics=\n");
	for(i=0;i<n2;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
	
	
}
