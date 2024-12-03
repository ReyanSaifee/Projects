#include<iostream>
using namespace std;

int main()
{
	int option;
	float balance=1000;
	do{
		cout<<"Options:"<<endl;
		cout<<"1. Check Balance"<<endl;
		cout<<"2. Withdraw Money"<<endl;
		cout<<"3. Deposit Money"<<endl;
		cout<<"4. Exit"<<endl;
		cin>>option;
		
		switch(option){
			case 1:
				cout<<"Your Current Balance is: $"<< balance<<endl;
				break;
			case 2:
				float withdrawl;
				cout<<"Enter Withdrawl Amount: ";
				cin>>withdrawl;
				if(withdrawl<=balance){
					cout<<"Withdrawl is allowed"<<endl<<"New Balance: "<<balance-withdrawl<<endl;
				}
				else{
					cout<<"Insufficient Balance"<<endl;
				}
				break;
			case 3:
				float deposit;
				cout<<"Enter the Amount You Want To Deposit: ";
				cin>>deposit;
				cout<<"You Deposited: "<<deposit<<endl<<"Your New Balance is: "<<balance+deposit<<endl;
				break;
			case 4:
				cout<<"ThankYou For Using Our Bank"<<endl;
				break;
			default:
				cout<<"Invalid Option"<<endl;
				break;
		}
	}while(option!=4);
	return 0;
}
