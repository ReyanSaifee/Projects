#include<iostream>
using namespace std;
int main()
{
	int number;
	int oddcount=0;
	int evencount=0;
	
	cout<<"Enter Any Number: ";
	while(true){
		cin>>number;
		if(number==0){
			break;
		}
		if(number%2==0){
			cout<<"Even Number"<<endl;
			evencount++;
		}
		else{
			cout<<"Odd Number"<<endl;
			oddcount++;
		}
	}
	cout<<"Total Even Number: "<<evencount<<endl;
	cout<<"Total Odd Number: "<<oddcount<<endl;
	return 0;

}
