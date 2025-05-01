s#include<iostream>
#include<string.h>
using namespace std;
class BankAccount{
	private:
		string accountHolder;
		int accountNumber;
		string accountType;
		double Balance;
		
	public:
		void getAccountHolder(){
			cout<<"Account details:"<<endl;
			cout<<"Holder:"<<accountHolder<<endl;
		}
		void getAccountNumber(){
			cout<<"Account Number:"<<accountNumber<<endl;
		}
		void getAccountType(){
			cout<<"Type:"<<accountType<<endl;
		}
		void getBalance(){
			cout<<"Balance:"<<Balance<<endl;
		}
		void setAccountType(string a){
			accountType=a;
		}
		BankAccount(){
			accountHolder='\0';
			accountNumber=0;
			accountType='\0';
			Balance=0;
		} 
		BankAccount(string x,int y,string z,int w){
			accountHolder=x;
			accountNumber=y;
			accountType=z;
			Balance=w;
		}
		double Deposit(double Balance){
			double Amount=0;
			cout<<"Enter amount for deposit:";
			cin>>Amount;
			Balance=Balance+Amount;
			return Balance;
		}
		double Withdraw(double Balance){
			double Amount=0;
			cout<<"Enter amount for withdraw:";
			cin>>Amount;
			Balance=Balance-Amount;
			return Balance;
		}
		void dispalyAccountDetails(int Withdrawing){
			cout<<"Final account detail:"<<endl;
			cout<<"Holder:"<<accountHolder<<endl;
			cout<<"Account Number:"<<accountNumber<<endl;
			cout<<"Type:"<<accountType<<endl;
			cout<<"Balance:"<<Withdrawing<<endl;
		}
		
};
int main(){
	BankAccount b1;
	b1.getAccountHolder();
	b1.getAccountNumber();
	b1.getAccountType();
	b1.getBalance();
	b1.setAccountType("xyz");
	b1.getAccountType();
	BankAccount b2("abc",234,"xyz",10000);
	b2.getAccountHolder();
	b2.getAccountNumber();
	b2.getAccountType();
	b2.getBalance();
	double Depositing;
	Depositing=b2.Deposit(10000);
	cout<<"New balance:"<<Depositing<<endl;
	double Withdrawing;
	Withdrawing=b2.Withdraw(Depositing);
	cout<<"New balance:"<<Withdrawing<<endl;
	b2.dispalyAccountDetails(Withdrawing);
	
	return 0;	
}
