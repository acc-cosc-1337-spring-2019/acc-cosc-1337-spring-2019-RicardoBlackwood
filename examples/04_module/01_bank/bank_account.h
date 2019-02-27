
class BankAccount 
{
public:
	BankAccount(int act, double bal) : account_number(act), balance(bal) {}//constructor
	double get_balance() const;
	void deposit(double amount);
	void withdraw(double amount);

private://access specifier; data not directly available to users of this class
	double balance;
	int account_number;
};

