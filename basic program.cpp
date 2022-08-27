#include<iostream>
using namespace std;
class sample
{
	public:
		int a,b,c;
		void getdata();
		void putdata();
};
void sample::getdata()
{
	cout<<"Enter The Values For a and b\n";
	cin>>a>>b;
}
void sample::putdata()
{
	cout<<"The Values Of a&bis\n"<<a<<"\t"<<b;
}
int main()
{
	sample s1;
	s1.getdata();
	s1.putdata();
	sample s2;
	s2.getdata();
	s2.putdata();
	sample s3;
	s3.getdata();
	s3.putdata();
	return 0;
}
