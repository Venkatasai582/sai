#include<iostream>
using namespace std;
int main()
{
	int n,i,m=0,flag=0;
	cout<<"'Enter The Number To check Prime:";
	cin>>n;
	m=n/2;
	for(i=2;i<=m;i++)
	{
		if(n%i==0)
		{
			cout<<"Number Is Not Prime."<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0)
	cout<<n<<" is a Prime Number."<<endl;
	return 0;
}
