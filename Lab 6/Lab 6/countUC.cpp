// Program CountUC counts the number of uppercase letters
// on a line.

#include <iostream>
using namespace std;

int main()
{
	string input = "AbbaDabbaDoo";
	int numCapitals = 0;

	for (auto iter = input.begin(); iter != input.end(); iter++)	//Loop over every letter
	{
		if ('A' <= *iter && *iter <= 'Z') //If the current letter is a capital
			numCapitals++;
	}

	cout << "The number of capitals:" << numCapitals << endl;

	cin.get();

	return 0;
}
