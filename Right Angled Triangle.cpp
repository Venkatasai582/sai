#include<iostream>
using namespace std;
int main()
{
	int i,j,r,k;
	cout<<"\nEnter The No Of Rows: ";
	cin>>r;
	for(i=0;i<r;i++)
	{
		for(j=r;j<=i;j--)// for left angle triangle change the symbol in j>=i.
		{
			cout<<" ";
		}
		for(k=0;k<=i;k++)
		{
			cout<<"*";
		} x
		cout<<"\n";
	}
	return 0;
}
