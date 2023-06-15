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

void addTransaction(struct Transaction)
{
}

void newAccount(struct Account)
{
}

void getCurrentBalance(struct Account)
{
}

void findAccount(struct Account)
{
}

int main()
{
  return 0;
}
