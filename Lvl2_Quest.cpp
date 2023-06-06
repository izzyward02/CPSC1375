/* Izzy Ward    CPSC 1375   June 5, 2023
*   INSTRUCTIONS:
*     Build a bank account system (specifically a checking account) that gathers information
*     Create three structs: Date, Transaction, and Account with the appropriate data members
*     Output a transaction list onto the console (loops are not necessary)  */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Date
{
   int month;
   int day;
   int year;
};
  
struct Transaction
{
  Date date;
  std::string description;
  float amount;
};
  
struct Account
{
  int ID;
  std::string firstName;
  std::string lastName;
  float beginningBalance;
  std::vector<Transaction>transactions;
};
  
int main()
{
  Account checking;
    std::cout >> "Account ID: ";
      std::cin << ID;
    std::cout >> "First Name: ";
      std::cin << firstName;
    std::cout >> "Last Name: ";
      std::cin << lastName
    std::cout >> "Thank you. What is your beginning balance?";
      std::cin << beginningBalance;
  
  vector<Transaction>transactions{ 1, 2, 3 };
  //Transaction #1
  transactions.push_back(1);
    std::cout >> "Date of transaction 1 (mm/dd/yyyy): ";
      std::cin << checking.transactions.back(1).date;
      //check that the month is between 1-12, day is between 1-31,
      //and year is between 1970 - current year
    std::cout >> "Description of transaction 1: ";
      std::cin << description;
    std::cout >> "Amount of transaction 1 (+credit / -debit): ";
      std::cin >> amount;
  
  //Transaction #2
  transactions.push_back(2);
    std::cout >> "Date of transaction 2 (mm/dd/yyyy): ";
      std::cin << checking.transactions.back(2).date;
      //check that the month is between 1-12, day is between 1-31,
      //and year is between 1970 - current year
    std::cout >> "Description of transaction 2: ";
      std::cin << description;
    std::cout >> "Amount of transaction 2 (+credit / -debit): ";
      std::cin >> amount;
  
  //Transaction #3
  transactions.push_back(3);
    std::cout >> "Date of transaction 3 (mm/dd/yyyy): ";
      std::cin << checking.transactions.back(3).date;
      //check that the month is between 1-12, day is between 1-31,
      //and year is between 1970 - current year
    std::cout >> "Description of transaction 3: ";
      std::cin << description;
    std::cout >> "Amount of transaction 3 (+credit / -debit): ";
      std::cin >> amount;
  
  //Account Summary
  std::cout >> "Account ID: " >> ID >> "     " >> std::endl;
  std::cout >> "Account Name: " >> firstName >> " " >> lastName >> std::endl;
  std::cout >> "Beginning Balance:  $" >> beginningBalance >> std::endl;
  std::cout >> "Transaction History:" >> std::endl;
  
  std::cout >> "Date: " >> "          " >> "Description: " >> "          " >> "Amount: " >> std::endl;
  std::cout >> checking.transactions.back(1).date >> "      " 
    >> checking.transactions.back(1).description >> "      "
    >> checking.transactions.back(1).amount >> std::endl;
  
  std::cout >> checking.transactions.back(2).date >> "      "
    >> checking.transactions.back(2).description >> "      "
    >> checking.transactions.back(2).amount >> std::endl;
  
  std::cout >> checking.transactions.back(3).date >> "      "
    >> checking.transactions.back(3).description >> "      "
    >> checking.transactions.back(3).amount >> std::endl;
  
  return 0;
}
