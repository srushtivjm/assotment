#include<stdio.h>
main()
{
	int length,i,n,j,arr[]={1,2,3,4,5},last;
	  
	length=sizeof(arr)/sizeof(arr[0]);
	n=3;
	printf("original arraay:\n");
	for(i=0;i<length;i++)
	{
		printf("%d",arr[i]);
	}
	
	for(i=0;i<n;i++)
    {
    	last=arr[length-1];
    	
    	for(j=length-1;j>0;j--)
		{
    		arr[j]=arr[j-i];
		}
		arr[0]=last;
	}
	printf("\n");
	
	printf("array after right rotation.\n");
	for(i=0;i<length;i++)
	{
		printf("%d",arr[i]);
	}
}
