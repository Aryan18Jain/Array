#include<iostream>
#include<climits>
using namespace std;
main()
{
	int n,s;
	cout<<"Enter the size of array:";
	cin>>n;
	int a[n],sum=0,maxsum=INT_MIN;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
		if(sum<0)
		{
		sum=0;
		s=i;
		}
		maxsum=max(maxsum,sum);
	}
	for(int i=0;i<s;i++)
	{
		sum=sum+a[i];
		if(sum<0)
		sum=0;
		maxsum=max(maxsum,sum);
	}
	cout<<maxsum;
}
