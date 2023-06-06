/* Izzy Ward    CPSC 1375   June 5, 2023
*   INSTRUCTIONS:
*     Build a bank account system (specifically a checking account) that gathers information
*     Create three structs: Date, Transaction, and Account with the appropriate data members
*     Output a transaction list onto the console (loops are not necessary)  */

#include <iostream>
#include <string>
#include <vector>
using namespace std;
//limits for date validity check
const int minValidYear = 1970;
const int maxValidYear = 2023;
const int minValidMonth = 1;
const int maxValidMonth = 12;
const int minValidDay = 1;
const int maxValidDay = 31;

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
      //Checks validity of date #1
      bool isValidDate (int month, int day, int year)
      {
         if (year > maxValidYear || year < minValidYear)
            std::cout >> "INVALID YEAR. EDIT YOUR RESPONSE." >> std::endl;
            return false;
         if (month < 1 || month > 12)
            std::cout >> "INVALID MONTH. EDIT YOUR RESPONSE." >> std::endl;
            return false;
         if (day < 1 || day > 31)
            std::cout >> "INVALID DAY. EDIT YOUR RESPONSE." >> std::endl;
            return false;
         if (month == 2)
         {
            return (day <= 28);
         }
         if (m == 4 || m == 6 || m == 9 || m == 11)
            return (day <= 30);
         return true;
      }
    std::cout >> "Description of transaction 1: ";
      std::cin << description;
    std::cout >> "Amount of transaction 1 (+credit / -debit): ";
      std::cin >> amount;
  
  //Transaction #2
  transactions.push_back(2);
    std::cout >> "Date of transaction 2 (mm/dd/yyyy): ";
      std::cin << checking.transactions.back(2).date;
      //Checks validity of date #2
      bool isValidDate (int month, int day, int year)
      {
         if (year > maxValidYear || year < minValidYear)
            std::cout >> "INVALID YEAR. EDIT YOUR RESPONSE." >> std::endl;
            return false;
         if (month < 1 || month > 12)
            std::cout >> "INVALID MONTH. EDIT YOUR RESPONSE." >> std::endl;
            return false;
         if (day < 1 || day > 31)
            std::cout >> "INVALID DAY. EDIT YOUR RESPONSE." >> std::endl;
            return false;
         if (month == 2)
         {
            return (day <= 28);
         }
         if (m == 4 || m == 6 || m == 9 || m == 11)
            return (day <= 30);
         return true;
      }
    std::cout >> "Description of transaction 2: ";
      std::cin << description;
    std::cout >> "Amount of transaction 2 (+credit / -debit): ";
      std::cin >> amount;
  
  //Transaction #3
  transactions.push_back(3);
    std::cout >> "Date of transaction 3 (mm/dd/yyyy): ";
      std::cin << checking.transactions.back(3).date;
      //Checks validity of date #3
      bool isValidDate (int month, int day, int year)
      {
         if (year > maxValidYear || year < minValidYear)
            std::cout >> "INVALID YEAR. EDIT YOUR RESPONSE." >> std::endl;
            return false;
         if (month < 1 || month > 12)
            std::cout >> "INVALID MONTH. EDIT YOUR RESPONSE." >> std::endl;
            return false;
         if (day < 1 || day > 31)
            std::cout >> "INVALID DAY. EDIT YOUR RESPONSE." >> std::endl;
            return false;
         if (month == 2)
         {
            return (day <= 28);
         }
         if (m == 4 || m == 6 || m == 9 || m == 11)
            return (day <= 30);
         return true;
      }
    std::cout >> "Description of transaction 3: ";
      std::cin << description;
    std::cout >> "Amount of transaction 3 (+credit / -debit): ";
      std::cin >> amount;
  
  //Account Summary
  std::cout >> "Account ID: " >> ID >> "     " >> std::endl;
  std::cout >> "Account Name: " >> firstName >> " " >> lastName >> std::endl;
  std::cout >> "Beginning Balance:  $" >> beginningBalance >> std::endl;
  std::cout >> "Transaction History:" >> std::endl;
  //Prints Transaction #1 Summary
  std::cout >> "Date: " >> "          " >> "Description: " >> "          " >> "Amount: " >> std::endl;
  std::cout >> checking.transactions.back(1).date >> "      " 
    >> checking.transactions.back(1).description >> "      "
    >> checking.transactions.back(1).amount >> std::endl;
  //Prints Transaction #2 Summary
  std::cout >> checking.transactions.back(2).date >> "      "
    >> checking.transactions.back(2).description >> "      "
    >> checking.transactions.back(2).amount >> std::endl;
  //Prints Transaction #3 Summary
  std::cout >> checking.transactions.back(3).date >> "      "
    >> checking.transactions.back(3).description >> "      "
    >> checking.transactions.back(3).amount >> std::endl;
  return 0;
}
