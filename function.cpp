#include <iostream>
#include <time.h>
using namespace std;
int checkNum();
int num, j = 0;
int nrand;
int main()
{
	srand(time(NULL));
	nrand = 1 + rand() % 10;
	cout << "####Welcome to guessing number game####\n";
	cout << "Secret number has been chosen \n";
	do {
		j++;
		cout << "Guess the number (1 to 10): ";
		cin >> num;
		checkNum();
	} while (num != nrand);
}
int checkNum()
{
	if (num > nrand) {
		cout << "The secret number is lower \n";
	}
	if (num < nrand) {
		cout << "The secret number is higher \n";
	}
	if (num == nrand) {
		cout << "Congratulations! \n";
		cout << "The secret number is " << nrand << endl;
		cout << "You made " << j << " guesses\n";
	}
	return (0);
}