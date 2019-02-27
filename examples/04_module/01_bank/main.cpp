#include<iostream>
#include<vector>

#include "bank_account.h"

int main()
{
	std::vector<BankAccount>accounts = { BankAccount (12345689, 500), BankAccount (55545689, 5000) };

	for (auto act : accounts)
	{
		std::cout << act.get_balance() << "\n";
	}

	return 0;
}