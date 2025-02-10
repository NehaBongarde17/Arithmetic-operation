#include<iostream>
#include<string.h>
using namespace std;
class Student{
	static int count;
	private:
		int roll_no;
		string name;
	public:
		void getStudentInfo(){
			cout<<count<<endl;
			cout<<"Roll no.:"<<roll_no<<'\t'<<"Name:"<<name<<endl;
			count++;
		}
		Student(int a,string b){
			//cout<<count<<endl;
			roll_no=a;
			name=b;
		}
};

int Student::count=0;

int main(){
	Student s[4]={Student(1,"x"),Student(2,"y"),Student(3,"z"),Student(4,"w")};
	for(int i=0;i<4;i++)
	{
		s[i].getStudentInfo();
	}
	return 0;
	
}
