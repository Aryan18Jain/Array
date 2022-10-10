#include<stdio.h>
main()
{
	int arr[50],n,i,a;
	printf("how many elements to be inserted in array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element");
		scanf("%d",&arr[i]);
	}
	printf("Array:\n");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\nDid you forget any element to insert?\n");
	printf("Enter 1 for yes and 2 for no:");
	scanf("%d",&a);
	if(a==1)
	{
		int e,l;
		printf("Enter the element to be inserted:");
		scanf("%d",&e);
		printf("Enter the index of inserted element");
		scanf("%d",&l);
		for(i=n-1;i>=l;i--)
		{
			arr[i+1]=arr[i];
		}
		arr[l]=e;
		printf("Updated Array:\n");
		for(i=0;i<n+1;i++)
		printf("%d\n",arr[i]);
	}
}
