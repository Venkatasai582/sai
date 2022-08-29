#include<iostream>
using namespace std;
class employee{
	public:
		string name;
		int emp_id;
		int basic;
		int grosspay,da,it,netpay;
		void gross_pay()
		{
			da=basic*0.52;
			grosspay=basic+da;
			cout<<"Gross Pay is "<<grosspay<<"\n";
		}
		void net_pay()
		{
			it=grosspay*0.30;
			netpay=(basic+da)-it;
			cout<<"Net Pay is "<<netpay;
		}
};
int main()
{
	int id,basic_pay;
	employee o1;
	cout<<"enter the employee name";
	cin>>o1.name;
	cout<<"enter the employee id:";
	cin>>o1.emp_id;
	cout<<"enter the basic pay:";
	cin>>o1.basic;
	o1.gross_pay();
	o1.net_pay();
	
}
