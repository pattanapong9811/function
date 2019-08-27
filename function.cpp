#include <iostream>
#include <time.h>
using namespace std;
int checkNum();
int num, j = 0;
int num2;
int main()
{
	srand(time(NULL));
	num2 = 1 + rand() % 10;
	cout << "####Welcome to guessing number game####\n";
	cout << "Secret number has been chosen \n";
	do {
		j++;
		cout << "Guess the number (1 to 10): ";
		cin >> num;
		checkNum();
	} while (num != num2);
}
int checkNum()
{
	if (num > num2) {
		cout << "The secret number is lower \n";
	}
	if (num < num2) {
		cout << "The secret number is higher \n";
	}
	if (num == num2) {
		cout << "Congratulations! \n";
		cout << "The secret number is " << num2 << endl;
		cout << "You made " << j << " guesses\n";
	}
	return (0);
}
