#include<stdio.h>
main()
{
	int n;
	printf("enter the size of array");
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		printf("Enter the element:");
		scanf("%d",&arr[i]);
	}	
	printf("Elements are:\n");
	for(i=0;i<n;i++)
	printf("%d\n",arr[i]);
}
