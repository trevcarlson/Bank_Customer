#ifndef Bank_h
#define Bank_h

#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "CD_Account.h"
#include "Customer.h"
#include "Loan.h"
#include <vector>
#include <time.h>
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

class Bank
{
public:

	//Getters
	const std::vector<Customer*>& getCustomers() const; //Changed to const for iter
	const std::vector<Account*>& getAccounts() const; //Changed to const for iter
	const std::vector<Transaction*>& getTransactions() const; //Changed to const for iter
	Date getCurrentDate();
	const int getCurrentUser() const;

	//Setters
	void setCustomer(Customer*);
	void setAccount(Account*);
	void setTransaction(Transaction*);
	void setCurrentDate(Date);
	void setCurrentUser(int);

	//Read Functions
	void readCustomers();
	void readAccounts();
	void readTransactions();
	void readAssociation();

	//Calculation Functions
	void calculateFees();
	void calculateInterest();

	//Creation Functions
	void welcome_menu();
	void login_menu();
	void main_menu();
	int get_input();
	bool credential_validation(int, std::string);
	void customer_input_menu();
	void account_input_menu();
	void transaction_input_menu();
	void print_customer_statements();
	void customer_total();
	void account_association_menu();
	void print_total();
	void customer_summary_menu();
	void customer_payment();
	void change_password();

private:
	Date current_date;
	std::vector<Customer*> pCustomers;
	std::vector<Account*> pAccounts;
	std::vector<Transaction*> pTransactions;
	int current_user;
};

#endif