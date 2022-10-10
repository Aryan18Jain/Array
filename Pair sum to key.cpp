#include<iostream>
using namespace std;
void sort(int arr[],int n)
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
	int size,start,end,i,key;
	cout<<"Enter the size of array";
	cin>>size;
	start=0;end=size-1;
	int arr[size];
	for(i=0;i<size;i++)
	{
		cout<<"Enter "<<i+1<<" element:";
		cin>>arr[i];
	}
	cout<<"Enter the sum of pair you want:";
	cin>>key;
	sort(arr,size);
	while((arr[start]+arr[end])!=key)
	{
		if((arr[start]+arr[end])<key)
		start++;
		else
		end--;
	}
	if(arr[start]+arr[end]==key)
	cout<<"Pair Found: "<<arr[start]<<" + "<<arr[end]<<" = "<<key;
	else
	cout<<"Pair not found";
}
