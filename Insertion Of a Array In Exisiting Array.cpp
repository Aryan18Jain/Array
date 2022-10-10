#include<stdio.h>
main()
{
	int arr[50],ins[50],n,i;
	printf("How many elements do you want to insert:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the element:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\ndo you want to insert multiple elements in previous array");
	printf("\nEnter 1 for yes and 2 for no:");
	int a;
	scanf("%d",&a);
	if(a==1)
	{
		int m,p;
		printf("how many elements to be insert?");
		scanf("%d",&m);
		printf("Enter the index from where the elements to be inserted:");
		scanf("%d",&p);
		for(i=0;i<m;i++)
		{
			printf("Enter  the element:");
			scanf("%d",&ins[i]);
		}
		for(i=n-1;i>=p;i--)
		{
			arr[i+m]=arr[i];
		}
		for(i=0;i<m;i++)
		{
			arr[i+p]=ins[i];
		}
		for(i=0;i<(m+n);i++)
		printf("%d ",arr[i]);
	}
}
