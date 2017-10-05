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

void display(int value)
{
	cout << "Sum up to " << value << ":" << sumUpTo(value) << endl;
}

int main()
{
	int sum;		// Running sum
	int digit;

	display(0);
	display(3);
	display(7);
	display(9);

	cout << "Enter a one-digit number; press return."
		<< endl;
	cin >> digit;

	sum = sumUpTo(digit);

	cout << "Sum of digits between 0 and "
		<< digit << " is " << sum << endl;
	return 0;
}
