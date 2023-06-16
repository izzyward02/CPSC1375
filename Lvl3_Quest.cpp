/*  Izzy Ward   CPSC 1375   June 15, 2023
*     INSTRUCTIONS:
*       Start with the Account & Transaction structs from last quest.
*       Write four functions: 'addTransaction', 'newAccount', 'getCurrentBalance', and 'findAccount'
*       For the main function, create a vector of Account structs that should present a menu of options for the user
*       Options: "Add Account", "Add Transaction", "Get Balance", "List Transaction", and "Exit Program"  */

#include <iostream>
#include <string>
#include <vector>

struct Account    //struct & members from Quest 2
{
  int ID;
  std::string firstName;
  std::string lastName;
  float beginningBalance;
  std::vector<Transaction> transactions;
};

struct Transaction    //struct & members from Quest 2
{
  Date date;
  std::string description;
  float amount;
};
//asks for information for a transaction
void addTransaction(std::vector<Transaction> transactions;)
{
  std::cout << "What is the account ID?: ";
  std::cin >> checking.ID;

  std::cout << "What is the cardholder's first and last name?: ";
  std::cin >> checking.firstName >> checking.lastName;

  std::cout << "What is the beginning balance for the account?: ";
  std::cin >> checking.beginningBalance;
  //asks for date of transaction
  checking.transactions.push_back(Transaction());
  std::count << "Please enter the date of the transaction in the form: MM DD YY: ";
  std::cin >> checking.transactions.back().date.month >> checking.transactions.back().date.day >> checking.transactions.back().date.year;
  //checks date validity
  if (checking.transactions.back().date.month < 1 || checking.transactions.back().date.month > 12)
    if (checking.transactions.back().date.day < 1 || checking.transactions.back().date.day > 31)
      if (checking.transactions.back().date.year > 0 || checking.transactions.back().date.year < 21)
        checking.transactions.back().date.year += 2000;
  else if (checking.transactions.back().date.year > 70 && checking.transactions.back().date.year < 99)
    checking.transactions.back().date.year += 1970;
  else
    checking.transactions.back().date.year = 2021;
  //asks for transaction description
  std::cout << "Where did the transaction take place?: ";
  std::cin >> checking.transactions.back().description;
  //asks for transaction amount
  std::cout << "How much was the transaction?: ";
  std::cin >> checking.transactions.back().amount;

  return Transaction;
}
//asks for information for newAccount, except ID
void newAccount(std::vector<Account> accounts)
{
  int tempID{ 1 };
  if (accounts.size() != 0)
    tempID = (accounts.at(accounts.size() - 1).ID) + 1;  //takes last ID & increments it
  //asks for first and last name for newAccount
  std::cout << "What is the cardholder's first and last name?: ";
  std::cin >> checking.firstName >> checking.lastName;
  //asks for beginningBalance of newAccount
  std::cout << "What is the beginning balance for the account?: ";
  std::cin >> checking.beginningBalance;

  return Account;
}
//calculates & returns the currentBalance based on transactions & beginningBalance
void getCurrentBalance(Account myAccount)
{
  float currentBalance(account.beginningBalance);
  for (int i{ 0 }; i < account.transaction.size(); i++)
  {
    currentBalance += account.transaction.at(i).amount;
  }
  return currentBalance;
}
//uses linear search to find account by its ID & returns index in the vector
void findAccount(int findID, std::vector<Account> accounts)
{
  for (i{ 0 }; i < accounts.size(); i++)
  {
    if (accounts.at(i).ID == findID)
      return i;
  }
  return -1;
}

int main()
{
  std::vector<Account> accounts;
  bool menuIsOpen{ true };
  while (menuIsOpen)
  {
    std::cout << "(1) Add Account\n(2) Add Transaction\n(3) Get Balance\n(4) List Transactions\n(5) Exit Program\n";
    int menuSelection{ 0 };
    std::cin >> menuSelection;
    int accountID{ 0 };

    switch (menuSelection)
    //Add Account  
      case 1:
        accounts.push_back(newAccount(accounts));
        break;
    //Add Transaction
      case 2:
        std::cout << "What is your account ID?: ";
        std::cin >> accountID;
        if (findAccount(accountID, accounts) != 1)
          accounts.at(findAccount(accountID, accounts)).transaction.push_back(addTransaction());
        else
          std::cout << "Account not located";
        break;
    //Get Balance
      case 3:
        std::cout << "What is your account ID?: ";
        std::cin >> accountID;
        if (findAccount(accountID, accounts) != 1)
          std::cout << "Current Balance: " << getCurrentBalance(accounts.at(findAccount(accountID, accounts)));
        else
          std::cout << "Account not located";
        break;
    //List Transactions
      case 4:
        std::cout << "What is your account ID?: ";
        std::cin >> accountID;
        if (findAccount(accountID, accounts) != 1)
          for (int{ 0 }; i < accounts.at(findAccount(accountID, accounts)).transaction.size(); i++)
          {
            std::cout << "Transaction " << i + 1 << ": " << acounts.at(findAccount(accountID, accounts)).transaction.at(i).description << "\n";
            std::cout << "Amount: " << accounts.at(findAccount(accountID, accounrs)).transaction.at(i).amount << "\n";
          }
        else
          std::cout << "Account not located";
        break;
    //Exit Program
      case 5:
        menuIsOpen{ false };
        break;
  }
  return 0;
}
