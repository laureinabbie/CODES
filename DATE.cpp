#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int month, day, year;
	cout << "Enter Month: " << endl;
	cin >> month;
	cout << "Enter Day: " << endl;
	cin >> day;
	cout << "Enter Year: " << endl;
	cin >> year;
			if (month == 1 && day < 32)
			cout << "January" << ' ' << day << ' ' << year << endl;
			else if (month == 2 && day < 29)
			cout << "February" << ' ' << day << ' ' << year << endl;
			else if (month == 3 && day < 32)
			cout << "March" << ' ' << day << ' ' << year << endl;
			else if (month == 4 && day < 31) 
			cout << "April" << ' ' << day << ' ' << year << endl;
			else if (month == 5 && day < 32 )
			cout << "May" << ' ' << day << ' ' << year << endl;
			else if (month == 6 && day < 31)
			cout << "June" << ' ' << day << ' ' << year << endl;
			else if (month == 7 && day < 32)
			cout << "July" << ' ' << day << ' ' << year << endl;
			else if (month == 8 && day < 32)
			cout << "August" << ' ' << day << ' ' << year << endl;
			else if (month == 9 && day < 31)
			cout << "September" << ' ' << day << ' ' << year << endl;
			else if (month == 10 && day < 32)
			cout << "October" << ' ' << day << ' ' << year << endl;
			else if (month == 11 && day < 31)
			cout << "November" << ' ' << day << ' ' << year << endl;
			else if (month == 12 && day < 32)
			cout << "December" << ' ' << day << ' ' << year << endl;
			else
			cout << "Invalid Date! \n";
	_getch();
	return 0;
}
