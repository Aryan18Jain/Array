#include<iostream>
using namespace std;
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
		for(j=0;j<n-i;j++)
		if(arr[j]>arr[j+1])
		swap(arr[j],arr[j+1]);
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
}
