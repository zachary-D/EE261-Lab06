// Program Calories calculates a person's percentage of 
// calories from fat and prints an appropriate message. 

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string foodItem;
	int   gramsOfFat;
	int   calories;
	float fatCalPercent;

	cout << "Enter the name of a food item."
		<< "  Press return." << endl;
	getline(cin, foodItem);

	cout << "Enter the grams of fat; press return." << endl;
	cin >> gramsOfFat;

	cout << "Enter the number of calories; press return."
		<< endl;
	cin >> calories;

	fatCalPercent = ((float)gramsOfFat * 9) / (float)calories * 100;

	cout << "Fat calorie percentage:" << fatCalPercent << "%" << endl;

	cout << "This item is " << ((fatCalPercent < .3) ? "NOT " : "") << "Heart Healthy!!" << endl;
	cin.get(); cin.get(); //Hold the window open
	return 0;
}