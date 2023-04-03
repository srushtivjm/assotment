#include<stdio.h>

main()

{
	int i,n,a[100],large,s_large;
	
	printf("Enter value of n=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	
		printf(" second largest number=");
		
		for(i=0;i<n;i++)
		{
			if(large<a[i])
			{
				s_large=large;
				large=a[i];
			}
			else if(s_large<a[i])
			{
				s_large=a[i];
			}
	
		}
		printf("%d",s_large);
		
		
}
