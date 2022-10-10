#include<iostream>
using namespace std;
main()
{
	int n,i,count=0,max=0;
	cout<<"Enter size of array:";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	i=0;
	int diff=arr[i]-arr[i+1];
	for(i=0;i<n;i++)
	{
		if(arr[i]-arr[i+1]==diff)
		{
			count++;
		}
		else
		{
			diff=arr[i]-arr[i+1];
			if(count>max)
			max=count;
			count=1;
		}
	}
	cout<<max+1<<endl;
}

