#include <iostream>
using namespace std;
class Point{
	private:
		int x_co;
		int y_co;
	public:
		Point (int x=0,int y=0):x_co(x),y_co(y){
		}
		Point operator -(const Point& obj){
			return Point (x_co-obj.x_co,y_co-obj.y_co);
		}
		Point operator +(const Point& obj){
			return Point (x_co+obj.x_co,y_co+obj.y_co);
		}
		Point operator *(const Point& obj){
			return Point (x_co*obj.x_co,y_co*obj.y_co);
		}
		Point operator /(const Point& obj){
			return Point (x_co/obj.x_co,y_co/obj.y_co);
		}
		Point operator %(const Point& obj){
			return Point (x_co%obj.x_co,y_co%obj.y_co);
		}
		void show(){
			cout<<"New x is :"<<x_co<<endl;
			cout<<"New y is :"<<y_co<<endl;
		}
};
int main(){
	Point p1(12,6),p2(10,2);
	Point p3=p1-p2;
	cout<<"Substraction:"<<endl;
	p3.show();
	Point p4=p1+p2;
	cout<<"Addition:"<<endl;
	p4.show();
	Point p5=p1*p2;
	cout<<"Multiplication:"<<endl;
	p5.show();
	Point p6=p1/p2;
	cout<<"Division:"<<endl;
	p6.show();
	Point p7=p1%p2;
	cout<<"Modulus:"<<endl;
	p7.show();
	
	return 0;
}
