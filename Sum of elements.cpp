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
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("The sum of elements is:%d",sum);
}
