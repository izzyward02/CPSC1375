/*   Izzy Ward	CPSC 1375   June 21, 2023	
*	INSTRUCTIONS:
*	  Continuing from the Lvl 3 quest, add two pieces of functionality:
*	  The bank occasionally has a prize drawing for a random account holder. Randomly select an account.
*	  The ability to save and load the accounts. 	*/

#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <fstream>

#include "Transaction.h"
#include "Account.h"

//Account class
class Account
{
public:
	static int lastID; //tracks last ID
	Account(); //increments lastID & asks for info about account
	Account(int ID, std::string firstName, std::string lastName, float beginningBalnce); 
	void addTransaction(); //asks for info about transaction
	void addTransaction(Date date; std::string description, float amount);
	void print() const; //prints account info and transaction info
	//Getters
	float getCurrentBalance();
	int getID() const;
	std::string getFirstName(); const;
	std::string getLastName(); const;
	float getBeginningBalance() const;
	std::vector<Transaction> getTransaction() const;
private:
	int ID;
	std::string firstName;
	std::string lastName;
	float beginningBalance;
	std::vector<Transaction>transactions;
};

class Transaction
{
public:	
	Transaction() = delete;
	Transaction(Date date, std::string description, float amount);
	void print() const; //used in Accounts class to display transaction info
	//Getters
	float getAmount() const;
	Date getDate() const;
	std::string getDescription() const;
private:
	Date date();
	std::string description;
	float amount;
};

//define and initialize findAccount, chooseAccount, prizeDrawing, loadAccounts, & saveAccounts
int findAccount(int ID, const std::vector<Account> & accounts);
Account& chooseAccount(std::vector<Account>& accounts);
void prizeDrawing(const std::vector<Account>& accounts);
std::vector<Account> loadAccounts(const std::string & accountFile);
void saveAccounts(const std::string & accountFile, const std::vector<Account>& accounts);

using namespace std;
int main()
{
	enum class Choices { addAccount = 1, addTransaction, getBalance, print, drawPrize, exit };
	string accountFile{ "accounts.txt" };
	vector<Account> accounts{ loadAccounts(accountFile) };
	int choice{ 0 };

	while ((Choices)choice != Choices::exit)
	{
		cout << "Would you like to: \n"
			<< "  1. Add a new Account\n"
			<< "  2. Add a new Transaction to an existing Account\n"
			<< "  3. Get the current balance of an account\n"
			<< "  4. Print Account & Transactions\n"
			<< "  5. Draw Prize\n"
			<< "  6. Exit\n";
		cin >> choice;
		switch ((Choices)choice)
		{
		case Choices::addAccount:
			accounts.push_back(Account());
			break;
		case Choices::addTransaction:
			chooseAccount(accounts).addTransaction();
			break;
		case Choices::getBalance:
			cout << "Your current account balance is: $" << chooseAccount(accounts).getCurrentBalance() << endl;
			break;
		case Choices::print:
			chooseAccount(accounts).print();
			break;
		case Choices::drawPrize:
			prizeDrawing(accounts);
			break;
		default:
			break;
		}
		system("PAUSE");
		system("CLS");
	}
	saveAccounts(accountFile, accounts);
}

//function for findAccount; same functionality as Quest 3
int findAccount(int ID, const std::vector<Account>& accounts)
{
	for (int i{ 0 }; i < accounts.size(); i++)
	{
		if (accounts[i].getID() == ID)
			return i;
	}
	return -1;
}

//function for chooseAccount
Account& chooseAccount(std::vector<Account>& accounts)
{
	while (true)
	{
		system("CLS");
		std::cout << "Which account do you wish to access (1 - " << Account::lastID << "): ";
		int accountID;
		std::cin >> accountID; //asks for account ID
	
		if (int accountIndex{ findAccount(accountID, accounts) }; accountIndex != -1)
			return accounts[accountIndex]; //calls findAccount and returns account
		else
			std::cout << "not a valid ID!\n"; //returns error of invalid ID
	}
	return Account; //returns account based on ID
}

//function for prizeDrawing
void prizeDrawing(const std::vector<Account>& accounts)
{
	std::uniform_real_distribution<int> distribution( 0, (accounts.size() -1) );// create seed and engine between 0 & size -1
	std::random_device rd; //initialize & define generator
	std::default_random_engine prizeDrawing(rd()); //choose random winner
	std::cout << "Congratulations, " << accounts.firstName << " " << accounts.lastName
		<< ", you have won our prize drawing!" << std::endl;	//display winner info
}

//function for loadAccounts
std::vector<Account> loadAccounts(const std::string & accountFile)
{
	//takes vector of Account class & loads it from passed in file (.txt file)
	//assigns each line based on indicated file structure
}

//function for saveAccounts
void saveAccounts(const std::string & accountFile, const std::vector<Account>& accounts)
{
	//takes filename and vector of Account class from loadAccounts
	//saves it to save file it was loaded from (overwrites it)
}
