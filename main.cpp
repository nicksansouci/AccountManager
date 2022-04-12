#include "functions.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{
	int x;
	int y;
	bool LiveAccount = false;
	cout << "Welcome to Account Manager!"<<endl;
	cout << "To create an account press 1."<<endl;
	cin >> x;
	Account account1;
	if (x==1){
		account1.CreateAccount();
		LiveAccount = true;
	}
	while (LiveAccount){
	cout << "What would you like to do next? " <<endl;
	cout << "1: List Accounts" << "\n" <<"2: Reset Username" << "\n" 
	<< "3: Reset Password" << "\n" << "4: Delete Account"<< "\n" << "5: Create New Account" <<"\n";
	cin >> y;
	switch (y){
		case 1:
			account1.ListAccounts();
			break;
		case 2:
			account1.ResetUsername();
			break;
		case 3:
			account1.ResetPassword();
			break;
		case 4:
			account1.DeleteAccount();
		case 5:
			account1.CreateAccount();
			break;	
	}
}
}


