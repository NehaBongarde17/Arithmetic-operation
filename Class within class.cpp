#include<iostream>
using namespace std;
class Student{
	private:
		int roll_no=17;
	public:
		void getStudentInfo(){
			cout<<"Student roll no.:"<<roll_no<<endl;
		}
		class Percentage{
			private:
				float percentage=90;	
			public:
				void getPercentageInfo(){
					cout<<"Student percentage:"<<percentage<<endl;	
				}
				void getStudent4mPercentage(Student& x){
					cout<<"Student roll no.:"<<x.roll_no<<endl;
				}
		};		
};
int main(){
	Student s1;
	Student::Percentage p1;
	s1.getStudentInfo();
	p1.getPercentageInfo();
	p1.getStudent4mPercentage(s1);
	
	return 0;
	
}
