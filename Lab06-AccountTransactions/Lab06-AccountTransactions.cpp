// Lab06-AccountTransactions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cctype>
#include <iomanip>

using namespace std;

int main()
{
	char transCode;
	double balance = 0.0;
	double amount;

	cout << fixed << setprecision(2);
	cout << endl << "Deposit Withdraw Quit - D/W/Q:  ";
	cin >> transCode;
	transCode = toupper(transCode);


	while (transCode != 'Q')
	{
		if (transCode == 'D')
		{
			cout << endl << "   Amount to  Deposit:  ";
			cin >> amount;
			balance += amount;
		}
		else if (transCode == 'W')
		{
			cout << endl << "   Amount to Withdraw:  ";
			cin >> amount;
			balance -= amount;
		}
		else
		{
			cout << endl << "Transaction code " << transCode << " incorrect" << endl;
		}

		cout << endl << "Deposit Withdraw Quit - D/W/Q:  ";
		cin >> transCode;
		transCode = toupper(transCode);
	}

	cout << endl <<  "   Account Balance:  $" << balance << endl;
	
	cout << endl;
	system("pause");
	return 0;
}

