#include<iostream>
using namespace std;
main()
{
	int i,j,n;
	cout<<"Enter the size of array:";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of array:";
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(i=0;i<n;i++)
	{
		int sum=0;
		for(j=i;j<n;j++)
		{
			sum=sum+arr[j];
			cout<<sum<<endl;
		}
	}
}
