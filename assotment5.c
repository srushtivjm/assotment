#include<stdio.h>

main()

{
	int i,j,n1,n2,a[10][10],b[10][10];
	
	printf("Enter value of row=");
	scanf("%d",&n1);
	printf("Enter value of column=");
	scanf("%d",&n2);
	
	printf("Enter element for metrix.\n");

	for(i=0;i<n1;i++)
	for(j=0;j<n2;j++)
	{
		printf("a[%d][%d] =",i,j);
		scanf("%d",&a[i][j]);
		b[i][j]=a[i][j];
    }
	printf("metrix:\t");
printf("transpose:\n");
	for(i=0;i<n1;i++)
	{
	
	for(j=0;j<n2;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("     ");
		
		for(j=0;j<n2;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}

