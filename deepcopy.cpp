#include<iostream>
using namespace std;
class Demo{
	private:
		int* p;
	public:
		void getDemo(){
			cout<<*p<<endl;
		}
		void setDemo(int v){
			*this->p=v;
		}
		Demo(int x){
			cout<<"Default constructor is called"<<endl;
			p=new int(x);
		}
		Demo(const Demo& x){
			cout<<"Copy constructor is called"<<endl;
			p=new int(*x.p);
		}
};
int main()
{
	Demo d1(456);
	d1.getDemo();
	Demo d2(d1);
	d2.getDemo();
	d2.setDemo(777);
	d2.getDemo();
	d1.getDemo();
	
}
