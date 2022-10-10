#include<iostream>
using namespace std;
main()
{
	int n,key,check=0;
	cout<<"Enter the number of elements:";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the key to find in the array";
	cin>>key;
	for(int i=0;i<n;i++)
	{
		if(key==arr[i])
		check=i;
	}	
	if(check!=0)
	cout<<"Found with index: "<<check;
	else
	cout<<"Not found";
}
