#include<iostream>
using namespace std;
class BankAccount
    {
        private:
            string holdername;
            double balance;
        public:
            BankAccount(string name, double initialBalance) 
                {
                    holdername = name;
                    balance = initialBalance;
                }
            void deposit(double amount)
            {
                if(amount<0)
                {
                    cout<<"enter a valid amount to deposit"<<endl;
                }    
                else
                {
                    balance +=amount;
                    cout<<"deposit succesful"<< endl<<"balance:"<<balance<<endl;
                }
            }
            void withdraw(double amount)    
            {
                if(amount>balance)
                {
                    cout<<"insufficient balance"<<endl;
                }
                else if(amount<=0)
                {
                    cout<<"enter a valid amount to withdraw"<<endl;
                }
                else
                {
                    balance-=amount;
                    cout<<"withdrawal successful"<<endl<<"balance:"<<balance<<endl;
                }
            }
            void displayaccountinfo()
            {
                cout<<"account holder:"<<holdername<<endl;
                cout<<"balance :"<<balance<<endl;
            }
    };
int main()
    {
        string honame;
        int bal;
        int dep;
        int with;
        int choice;
        cout<<"enter the name of the holder"<<endl;
        cin>>honame;
        cout<<"enter the balance "<<endl;
        cin>>bal;
        BankAccount account(honame,bal);
        cout<<"choose an option:"<<endl<<"1.ACCOUNT INFO"<<endl<<"2.DEPOSIT"<<endl<<"3.WITHDRAWAL"<<endl;
        cout<<"enter your choice"<<endl;
        cin>> choice;
        switch(choice)
        {   
            case 1:
                account.displayaccountinfo();
                break;
            case 2:
                cout<<"enter the amount to deposit"<<endl;
                cin>>dep;
                account.deposit(dep);
                account.displayaccountinfo();
                break;
            case 3:
                cout<<"enter the amount to withdraw"<<endl;
                cin>>with;
                account.withdraw(with);
                account.displayaccountinfo();
                break;
            default:
                cout<<"invalid choice"<<endl;
                break;
        }
        return 0;
            
    }    