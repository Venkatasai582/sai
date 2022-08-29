#include<iostream>
using namespace std;
int main()
{
	string a,b;
	cout<<"Enter The String: ";
	cin>>a;
	for(int i=a.size()-1;i>=0;i--)
	{
		b+=a[i];
	}
	if(a==b)
	{
	cout<<"The Entered Word Is Palindrome";
	}
	else
	cout<<"The Entered Word Is Not A Palindrome";
}
