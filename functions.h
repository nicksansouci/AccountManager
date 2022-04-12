#include <string>
#include <iostream>
#include <cctype>
#include <map>
#include <conio.h>




class Account{

private:
	std::string username;
	std::string password;
	std::string passwordcheck;


public:
	std::map<std::string, std::string> accounts;
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
			std::cout << "Confirm password: " << std::endl;
			std::cin >> passwordcheck;
			
		}
		std::cout << "Congratulations " << username << " you have successfully created your account."<<std::endl;
		accounts.insert({username, password});

	}
	void DeleteAccount()
	{
		std::string answer;
		std::cout << "Are you sure you want to delete the account registered to " << username << "?" << std::endl;
		std::cin >> answer;
		if (answer ==  "yes" || answer == "Yes"|| answer == "y" || answer == "Y"){
			accounts.erase(username);
		}
		
	}
	void ResetPassword()
	{
		std::cout << "Type your current password: " << std::endl;
		std::cin >> passwordcheck;
		while (password != passwordcheck)
		{
			std::cout << "Passwords do not match"<< std::endl; 
			std::cin >> passwordcheck;
			std::cout << "Confirm password: " << std::endl;
			std::cin >> passwordcheck;
			
		}

	}
	void ResetUsername()
	{

	}
	
	void ListAccounts()
	{
		
		std::cout << "Username\tPassword\n";
		for (auto i = accounts.begin(); i != accounts.end(); i++)
		{
			std::cout << i->first << "\t\t" << "********" << std::endl;
		}
	}
};