#include<iostream>
using namespace std;
main()
{
	int i=0,j,n,l;
	cout<<"Enter the size of arrray:";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cout<<"Enter "<<i+1<<" element:";
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			for(l=i;l<=j;l++)
			{
				cout<<a[l]<<" ";
			}
			cout<<endl;
		}
	}
}
