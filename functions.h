#include <string>
#include <iostream>
#include <cctype>
#include <map>




class Account{

protected:
	std::string username;
	std::string password;
	std::string passwordcheck;
	std::string usernamecheck;


public:
	std::map<std::string, std::string> accounts;
	bool LiveAccount;
	int y;
	void CreateAccount()
	{
		std::cout << "Type a username: " << std::endl;
		std::cin >> username;
		std::cout << "Create a password: " << std::endl;
		std::cin >> password;
		std::cout << "Confirm password: " << std::endl;
		std::cin >> passwordcheck;
		while (password != passwordcheck)
		{
			std::cout << "Passwords do not match"<<"\n"; 
			std::cout << "Confirm your current password: ";
			std::cin >> passwordcheck;
			
		}
		clear();
		std::cout << "Congratulations " << username << " you have successfully created your account."<<std::endl;
		accounts.insert({username, password});

	}
	int DeleteAccount()
	{
		std::string answer;
		std::cout << "Type the username of the account to delete: " <<std::endl;
		std::cin >> username;
		std::cout << "Are you sure you want to delete the account registered to " << username << "?" << std::endl;
		std::cin >> answer;
		std::cout << std::endl;
		if (answer ==  "yes" || answer == "Yes"|| answer == "y" || answer == "Y" || answer == "YES"){
			std::cout << "Account " << username << " successfully deleted." << std::endl;
			accounts.erase(username);
			return 0;
		}
		else{
			Account::Menu();
		
		}
		return 0;
	}
	void ResetPassword()
	{
		std::cout << "Type your current password: " << std::endl;
		std::cin >> passwordcheck;
		while (password != passwordcheck)
		{
			std::cout << "Passwords do not match."<< std::endl; 
			std::cout << "Confirm password: " << std::endl;
			std::cin >> passwordcheck;
		}
		clear();
		std::cout << "Successfully reset the password for " << username << "." <<std::endl;
		
	}
	
	void ListAccounts()
	{
		std::cout << std::endl;
		std::cout << "Username\tPassword\n";
		std::cout << std::endl;
		for (auto i = accounts.begin(); i != accounts.end(); i++)
		{
			std::cout << i->first << "\t\t" << "********" << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << "---------------------------"<<std::endl;
		}
	}
	void clear(){
		system("cls");
	}
	void Menu()
	{
		while (LiveAccount){
		std::cout << std::endl;
		std::cout << "What would you like to do next? " <<std::endl;
		std::cout << "1: List Accounts" << "\n" <<"2: Reset Password" << "\n"
		<< "3: Delete Account" << "\n" << "4: Create New Account"<< "\n";
		std::cin >> y;
		switch (y){
			case 1:
				ListAccounts();
				break;
			case 2:
				ResetPassword();
				break;
			case 3:
				DeleteAccount();
				break;
			case 4:
				CreateAccount();
				break;	
			}
		}
	}

};