
#include <iostream>
using namespace std;
  int main(void) {
  int year;
	cout << "Enter a year: ";
	cin >> year;
	  if (year % 4 != 0) {
		cout << year << " It's a common year.";
	}
	else if (year % 100 != 0) {
		cout << year << " It's a leap year.";
	}
	else if (year % 400 != 0) {
		cout << year << " It's a common year.";
	}
	else {
		cout << year << " It's a leap year.";
	}
	return 0;
}