//header file for Account class inclusion in Lvl 4 Quest

#include <iostream>
#include <string>
#include <vector>

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
