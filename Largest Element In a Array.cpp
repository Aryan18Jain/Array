#include<stdio.h>
main()
{
	int n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		printf("Enter the element:");
		scanf("%d",&arr[i]);
	}
	int large=arr[0];
	for(i=1;i<n;i++)
	{
		if(large<arr[i])
		{
			large=arr[i];
		}
	}
	printf("largest element is:%d",large);
}
