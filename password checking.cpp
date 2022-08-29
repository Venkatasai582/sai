#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string a,b;
	cout<<"Enter The Password: ";
	cin>>a;
	cout<<"Re-enter The Password: ";
	cin>>b;
	if(a==b)
	{
		cout<<"The Password Is Correct";
	}
	else
	{
		cout<<"Incorret Password";
	}
}
