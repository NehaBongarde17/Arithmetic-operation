#include <iostream>
using namespace std;
class Bank{
    private:
        int Total_amount;
    public:
        int Deposit(int x){
            int amount;
            int y;
            cout<<"Enter the amount for deposit:";
            cin>>amount;
            y=x+amount;
            return y;
        }
        int Withdraw(int x){
            int amount;
            int y;
            cout<<"Enter the amount for withdraw:";
            cin>>amount;
            y=x-amount;
            return y; 
        }
      
};

int main() {
    Bank b1;
    char name[20];
    int choice;
    int Initial_amount;
    cout<<"Enter the name:";
    cin>>name;
    cout<<"Enter the initial amount:";
    cin>>Initial_amount;
    cout<<"1.Deposit amount"<<endl;
    cout<<"2.Withdraw amount"<<endl;
    cout<<"3.Check Bank Balance"<<endl;
    cout<<"4.Exit"<<endl;
    
    cout<<"Enter your choice:";
    cin>>choice;
    
    switch(choice){
        case 1:
        int Deposited_amount;
        Deposited_amount=b1.Deposit(Initial_amount);
        cout<<"After deposited total amount:"<<Deposited_amount;
        break;
        
        case 2:
        int withdraw_amount;
        withdraw_amount=b1.Withdraw(Initial_amount);
        cout<<"After withdraw total amount:"<<withdraw_amount;
        break;
        
        case 3:
        cout<<"Total amount in bank:"<<Initial_amount;
        break;
        
        default:cout<<"Invalid choice";
    }
    

    return 0;
}
