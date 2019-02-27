#include "bank_account.h"

double BankAccount::get_balance() const
{
	return balance;
}

void BankAccount::deposit(double amount)
{
	if (amount > 0) 
	{
		balance += amount;
	}
}

void BankAccount::withdraw(double amount)
{
	if (balance >= amount) 
	{
		balance -= amount;
	}
}
