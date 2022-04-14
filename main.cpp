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
	else{
		cout << "Press 1 to create an account."<<std::endl;
		main();
	}
	account1.Menu();
	return 0;
}


