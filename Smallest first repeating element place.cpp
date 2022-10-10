#include<iostream>
using namespace std;
main()
{
	int i,j,c=1,a[]={1,5,3,4,3,5,6};
	for(i=0;i<7;i++)
	{
		for(j=i+1;j<7;j++)
		{
			if(a[i]==a[j])
			{
				cout<<i+1;
				c=0;
				break;
		   	}
		}
		if(c==0)
		break;
	}
}
