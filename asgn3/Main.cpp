#include<iostream>
#include"Account.h"
#include"SavingAccount.h"
#include"CheckingAccount.h"
#include"TrustAccount.h"
using namespace std;
int main()
{
	CheckingAccount a1("Nurassyl", 10000, 1.5);
	a1.withdraw(a1, 5000);
	cout << a1.getBalance()<<endl;
	SavingAccount a2("Yerlan", 10000, 1.5);
	a2.deposit(a2, 5000);
	cout << a2.getBalance() << endl;
	TrustAccount a3("Kaisar", 10000, 1.5);
	a3.deposit(a3,500);
	cout << a3.getBalance() << endl;
	TrustAccount a4("Komron", 10000, 1.5);
	a4.withdraw(a4, 5000);
	cout << a4.getBalance() << endl;
	a4.print_data();
	return 0;
}