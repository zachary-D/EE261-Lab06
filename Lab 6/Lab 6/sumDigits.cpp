// Program SumDigits prompts for and reads a one-digit number.
// Values between 0 and the digit (inclusive) are summed.

#include <iostream>
using namespace std;

int sumUpTo(int limit)		//Returns the sum of values of 1 through limit
{
	int sum = 0;
	for (int i = 1; i <= limit; i++) sum += i;
	return sum;
}

int main()
{
	int sum;		// Running sum
	int digit;

	cout << "Enter a one-digit number; press return."
		<< endl;
	cin >> digit;

	sum = sumUpTo(digit);

	cout << "Sum of digits between 0 and "
		<< digit << " is " << sum << endl;

	cin.get(); cin.get();

	return 0;
}
