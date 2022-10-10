#include<iostream>
using namespace std;
swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void bubble_sort(int arr[], int n)
{
	int i,j;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		if(arr[j]>arr[j+1])
		swap(arr[j],arr[j+1]);
	}
}
main()
{
	int n,i,j;
	cout<<"Enter the size of array:";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cout<<"enter "<<i+1<<" element:";
		cin>>a[i];
	}
	bubble_sort(a,n);
	for(i=0;i<n;i++)
	{
		if(a[i+1]!=a[i]+1 && a[i]>0)
		{
		cout<<a[i]+1;
		break;
		}
	}
}
