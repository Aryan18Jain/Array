#include<iostream>
using namespace std;
main()
{
	int n,st=0,ed=0,i,sum,cursum=0;
	cout<<"enter the size of array:";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cout<<"enter "<<i+1<<" element:";
		cin>>a[i];
	}
	i=0;
	cout<<"enter the required sum for subarray:";
	cin>>sum;
	while(cursum<sum)
	{
		cursum=cursum+a[i];
		i++;
		ed++;
	}
	i=0;
	while(cursum>=sum)
	{
		cursum=cursum-a[i];
		i++;
		st++;
	}
	cout<<"starting of arrray:"<<st<<" end of array:"<<ed<<endl;
	cout<<"Elements of subarray are:";
	for(i=st-1;i<ed;i++)
	cout<<a[i]<<" ";
}
