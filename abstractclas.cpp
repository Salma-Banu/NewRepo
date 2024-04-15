// abstraction class;




#include<iostream>
using namespace std;

	class BaseClass
	{
	public:
			int var;
			virtual void display()=0;

	};
	class DerivedClass: public BaseClass
	{
		public:
		int var2;
			
		DerivedClass(int var2){
		this->var2=var2;
	}
	
	void display()
	{
		cout<<"displaying base class"<<var<<endl;
		cout<<": derived class :"<<var2<<endl;
	}
    };
	 
	 
int main()
{
	DerivedClass *Derive_Class_pointer;
    DerivedClass obj2(234);
	Derive_Class_pointer =&obj2;
    Derive_Class_pointer->display();
	BaseClass *bc = new DerivedClass(30);
	bc->display();
	return 0;
}