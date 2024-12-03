#include<iostream>
using namespace std;
int main()
{
	int operation;
	float num1,num2;
	do{
		cout<<"Operations: "<<endl;
		cout<<"Addition "<<endl;
		cout<<"Subtraction "<<endl;
		cout<<"Multiplication "<<endl;
		cout<<"Division "<<endl;
		cout<<"Exit "<<endl;
		cin>>operation;
		
		cout<<"Enter Your Two Numbers: "<<endl;
		cin>>num1>>num2;
		
		switch(operation){
			case 1:
				cout<<"Addition of Given Numbers Are: "<<num1+num2<<endl;
				break;
			case 2:
				cout<<"Subtraction of Griven Numbers Are: "<<num1-num2<<endl;
				break;
			case 3:
				cout<<"Multiplication of Given Numbers Are: "<<num1*num2<<endl;
				break;
			case 4:
				if(num2==0){
					cout<<"Enter A nonzero Number"<<endl;
				}
				else{
					cout<<"Division of Given Numbers Are: "<<num1/num2<<endl;
				}
				break;
			case 5:
				cout<<"Exit"<<endl;
				break;
		}
	}while(operation!=5);
	return 0;
}
