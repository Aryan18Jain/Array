#include <iostream>
using namespace std;
int pow(int x,int y)
{
	int mul=1;
	for(int i=0;i<+y;i++)
	mul=mul*x;
	return mul;
}
main()
{
	int arr[50],sum=0,n,p,a;
	cout<<"enter the length of binary number:";
	cin>>n;
	p=n-1;
	for(int i=0;i<n;i++)
	{
		cout<<"enter "<<i+1<<" digit";
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		a=pow(2,p);
		sum=sum+(arr[i]*a);
		p--;
	}
	cout<<sum;
}
