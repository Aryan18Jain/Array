#include<iostream>
#include<climits>
using namespace std;
swap(int* a, int* b)
{
	int* temp;
	*temp=*a;
	*a=*b;
	*b=*temp;
}
main()
{
	int n,i,j;
	cout<<"Enter the size of array:";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements:";
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		if(arr[j]<arr[i])
		swap(arr[i],arr[j]);
	}
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
