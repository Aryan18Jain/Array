#include<iostream>
using namespace std;
main()
{
	int i,n,key;
	cout<<"Enter the size of array:";
	cin>>n;
	int arr[n],left,right;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the key:";
	cin>>key;
	if(key<arr[n/2])
	{
	left=0;right=n/2;
	for(i=left;i<=right;i++)
	{
		if(key<arr[right/2])
		right=right/2;
		else
		left=right/2;
	}	
	}
	else
	{
		left=n/2;right=n;
		for(i=left;i<right;i++)
		if(key<arr[right+left/2])
		right=right+left/2;
		else
		left=right+left/2;
	}
	cout<<arr[left]<<"C"<<arr[right];
}
