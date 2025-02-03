#include<iostream>
using namespace std;
class Student{
	private:
		int roll_no;
		float percentage;
		int age;
	public:
		void getStudentInfo()
		{
			cout<<roll_no<<endl;
			cout<<percentage<<endl;
			cout<<age<<endl;
		}
		void setStudentInfo(int x,int y,int z){
			roll_no=x;
			percentage=y;
			age=z;
		}
		Student(){
			cout<<"Default constructor is called"<<endl;
		}
		Student(int x){
			cout<<"Constructor with 1 parameter is called"<<endl;
			roll_no=x;
			//percentage=80;
		}
		Student(int x,int y){
			cout<<"Constructor with 2 parameter is called"<<endl;
			roll_no=x;
			age=y;
		}
		Student(int x,float y,int z){
			cout<<"Constructor with 3 parameter is called"<<endl;
			roll_no=x;
			percentage=y;
			age=z;
		}
		Student(Student& obj){
			cout<<"Copy constructor is called"<<endl;
			roll_no=obj.roll_no;
			percentage=obj.percentage;
			age=obj.age;
		}
			
};
int main()
{
	Student s1;
	s1.getStudentInfo();
	s1.setStudentInfo(34,89,46);
	s1.getStudentInfo();
	Student s2(23);
	s2.getStudentInfo();
	Student s3(23,18);
	s3.getStudentInfo();
	Student s4(24,89.10,19);
	s4.getStudentInfo();
	Student s5=s4;
	s5.getStudentInfo();
	
	return 0;
}

