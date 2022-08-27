#include<iostream>
using namespace std;
class acc
{
	public:
		int accno;
		string name;
		static float roi;
		acc(int accno,string name)
		{
			this->accno=accno;
			this->name=name;
		}
		void display()
		{
			cout<<accno<<" "<<name<<" "<<roi<<endl;
		}
};
float acc::roi=6.5;
int main(void)
{
	acc a1=acc(201,"Sanjay");
	acc a2=acc(202,"Nakul");
	a1.display();
	a2.display();
	return 0;
}
