#include<iostream>
using namespace std;

int main()
{
	int pass=123;
	int userpass;
	int maxattempt=3;
	
	for(int i=1;i<=maxattempt;i++){
		cout<<"Enter Your Password: "<<endl;
	    cin>>userpass;
		if(userpass==pass){
			cout<<"Access Allowed"<<endl;
			break;
		}
		else{
			cout<<"Incorrect Passward"<<endl;
			if(i<=3){
				cout<<"Try Again"<<endl;
			}
			else{
				cout<<"Access Denied"<<endl;
			}
		}
	}
	return 0;
}
