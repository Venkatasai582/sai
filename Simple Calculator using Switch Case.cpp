#include<iostream>
using namespace std;
int main()
{
	char op;
	int num1,num2;
	cout<<"Enter The First No.:";
	cin>>num1;
	cout<<"Enter The Second No.:";
	cin>>num2;
	cout<< "Enter The Operator: +,-,*,/,%:";
	cin>>op;
	switch(op)
	{
		case '+':
			cout<<num1<<"+"<<num2<<"="<<num1+num2;
			break;
		case '-':
			cout<<num1<<"-"<<num2<<"="<<num1-num2;
			break;
		case '*':
			cout<<num1<<"*"<<num2<<"="<<num1*num2;
			break;
		case '/':
			cout<<num1<<"/"<<num2<<"="<<num1/num2;
			break;
		case '%':
			cout<<num1<<"%"<<num2<<"="<<num1%num2;
			break;
		default:
			cout<<"Error Operator Is Not Correct";
			break;
	}
	return 0;
}
