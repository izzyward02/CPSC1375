//header file for Transaction class inclusion in Lvl 4 Quest

#include <iostream>
#include <string>
#include <vector>

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
