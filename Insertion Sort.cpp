#include<iostream>
using namespace std;
swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
main()
{
	int n,i,j;
	cout<<"Enter the size of array:";
	cin>>n;
	cout<<"Enter the elements:";
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=1;i<n;i++)
	{
		int 
		current=arr[i];
		int j=i-1;
		while(arr[j]>current && i>=0)
		{
			swap(arr[j],arr[j+1]);
			j--;
		}
		arr[j+1]=current;
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
}
