// Jacob Hardman
// Comp Sci 1
// Professor Jennifer Bailey
// 9/24/19

#include <iostream>
#include <string>

using namespace std;

int main()
{
	bool isRunning = true;
	string userInput;
	string userName;

	const double DOLLAR = 1.00;
	const double PENNY = 0.01;
	const double NICKEL = 0.05;
	const double DIME = 0.10;
	const double QUARTER = 0.25;

	double numPennies = 0.00;
	double numNickels = 0.00;
	double numDimes = 0.00;
	double numQuarters = 0.00;

	double sum = 0.00;
	
	cout << "Please enter your name: ";
	cin >> userInput;

	userName = userInput;

	while (isRunning) {
		bool userConfirm = false;

		cout << "\nHello " << userName << ", I want to play a game." << endl;;

		cout << "Enter the number of coins needed to make a dollar: " << endl;

		cout << "Enter the number of pennies: ";
		cin >> userInput;

		numPennies = stod(userInput);
		numPennies *= PENNY;

		cout << "Enter the number of nickels: ";
		cin >> userInput;

		numNickels = stod(userInput);
		numNickels *= NICKEL;

		cout << "Enter the number of dimes: ";
		cin >> userInput;

		numDimes = stod(userInput);
		numDimes *= DIME;

		cout << "Enter the number of quarters: ";
		cin >> userInput;

		numQuarters = stod(userInput);
		numQuarters *= QUARTER;

		sum = numPennies + numNickels + numDimes + numQuarters;

		while (userConfirm == false) {
			if (sum == DOLLAR) {
				cout << "Congratulations. You've won." << endl;
				cout << "Play again? (Y/N): ";
				cin >> userInput;

				if (userInput == "y" || userInput == "Y") {
					userConfirm = true;
				}
				else if (userInput == "n" || userInput == "N") {
					userConfirm = true;
					isRunning = false;
				}
				else {
					cout << "What?" << endl;
				}
			}
			else if (sum < DOLLAR) {
				cout << "Too bad. You've lost. That was less than a dollar" << endl;
				cout << "Play again? (Y/N): ";
				cin >> userInput;

				if (userInput == "y" || userInput == "Y") {
					userConfirm = true;
				}
				else if (userInput == "n" || userInput == "N") {
					userConfirm = true;
					isRunning = false;
				}
				else {
					cout << "What?" << endl;
				}
			}
			else if (sum > DOLLAR) {
				cout << "Too bad. You've lost. That was more than a dollar" << endl;
				cout << "Play again? (Y/N): ";
				cin >> userInput;

				if (userInput == "y" || userInput == "Y") {
					userConfirm = true;
				}
				else if (userInput == "n" || userInput == "N") {
					userConfirm = true;
					isRunning = false;
				}
				else {
					cout << "What?" << endl;
				}
			}
		}
	}
}
