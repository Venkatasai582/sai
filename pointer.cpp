#include<iostream>
using namespace std;
class em
{
	public:
		int id;
		string name;
		float salary;
		em(int id,string name,float salary)
		{
			this->id=id;
			this->name=name;
			this->salary=salary;
		}
		void display()
		{
			cout<<id<<" "<<name<<" "<<salary<<endl;
		}
};
int main(void)
{
	em e1=em(101,"Sonoo",890000);
	em e2=em(102,"Nakul",59000);
	e1.display();
	e2.display();
	return 0;
}
