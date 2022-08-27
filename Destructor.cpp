#include<iostream>
using namespace std;
class em
{
	public:
		em()
		{
			cout<<"Constructor Invoked"<<endl;
		}
		~em()
		{
			cout<<"Destructor Invoked"<<endl;
		}
};
int main(void)
{
	em e1;
	em e2;
	return 0;
}
