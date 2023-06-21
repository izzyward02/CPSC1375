#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <fstream>

#include "Transaction.h"
#include "Account.h"

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

int findAccount(int ID, const std::vector<Account>& accounts)
{
	for (int i{ 0 }; i < accounts.size(); i++)
	{
		if (accounts[i].getID() == ID)
			return i;
	}
	return -1;
}

Account& chooseAccount(std::vector<Account>& accounts)
{
	while (true)
	{
		system("CLS");
		std::cout << "Which account do you wish to access (1 - " << Account::lastID << "): ";
		int accountID;
		std::cin >> accountID;
	
		if (int accountIndex{ findAccount(accountID, accounts) }; accountIndex != -1)
			return accounts[accountIndex];
		else
			std::cout << "not a valid ID!\n";
	}
	
}


