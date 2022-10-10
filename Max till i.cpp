#include<iostream>
#include<climits>
using namespace std;
main()
{
	int i,n,max=INT_MIN;
	cout<<"Enter the size of array:";
	cin>>n;
	cout<<"Enter the elements of array:";
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		max=arr[i];
		cout<<max;
	}
}
