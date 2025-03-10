#include<iostream>
using namespace std;
class Number{
	private:
		int value;
	public:
		Number(int v=0):value(v){
		}
		Number operator -(){
			return Number(-value);
		}
		Number operator --(){
			return Number(--value);
		}
		void show(){
			cout<<"After changing value is :"<<value<<endl;
		}
};
int main(){
	Number n1(7);
	Number n2=-n1;
	n2.show();
	Number n3=--n1;
	n3.show();
	
	return 0;
}
