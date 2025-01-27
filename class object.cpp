#include<iostream>
using namespace std;
class Student{
	private:
		int roll_no;
		string name;
		int age;
		
	public:
		Student(){
			cout<<"Constructor got called"<<endl;
		}
		Student(int x){
			roll_no=x;
			age=20;
		}
		Student(int a,int b){
			roll_no=a;
			age=b;
		}
		Student(int a,string n,int b){
			roll_no=a;
			name=n;
			age=b;
		}
		Student(int a,string n){
			roll_no=a;
			name=n;
			age=50;
		}
		void setStudentInfo(){
			cout<<"Student roll no:";
			cin>>roll_no;
			cout<<"Student name:";
			cin.ignore();
			getline(cin,name);
			cout<<"Student age:";
			cin>>age;
		}
		void getStudentInfo(){
			cout<<"Student roll no:"<<roll_no<<endl;
			cout<<"Student name:"<<name<<endl;
			cout<<"Student age:"<<age<<endl;
			
		}
		~Student(){
			cout<<"Destructor got called"<<endl;
		}
};
int main(){
	Student s1;
	s1.setStudentInfo();
	s1.getStudentInfo();
	Student s2(17);
	s2.getStudentInfo();
	Student s3(28,39);
	s3.getStudentInfo();
	Student s4(23,"xyz",12);
	s4.getStudentInfo();
	Student s5(89,"ABC");
	s5.getStudentInfo();


	
}
