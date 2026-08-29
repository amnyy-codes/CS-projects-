//Protected Access specifier in Inheritance 
#include<iostream>
using namespace std;
class Base 
{
	string name;
	public:
		void getname()
		{
		cout<<"My name is amna"<<endl;
		}
};
class Derived:public Base
{
	public:
		void getRollNo()
		{
			getname();
		}
};
main()
{
	Derived d;
	d.getRollNo();
}