#include<stdio.h>

main()
{
	int i,j,last,n,arr[]={1,2,3,4,5},length;
	length=sizeof(arr)/sizeof(arr[0]);
	n=3;
	
	printf("Orignnal Array;-");
	for(i=0;i<length;i++)
	{
		printf("%d",arr[i]);
	}
	for(i=0;i<n;i++)
	{
		last=arr[length-1];
		for(j=length-1;j>0;j--)
		{
			arr[j]=arr[j-1];
		}
		arr[0]=last;
	}
	printf("\n");
	
	printf("Right RotatArray:-");
	for(i=0;i<length;i++)
	{
		printf("%d",arr[i]);
	}
	
}
