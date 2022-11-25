#include "Helper.h"
#include <iostream>
void end();
void Clear();

int main()
{
	cout << "\nValid Integer: " << helper::GetValidatedInt("Enter int: ", 1, 1000) << endl;
	end();
	cout << "\nValid Birthday: " << helper::GetValidBirthday("Enter Birthday (MM/DD/YY) (00/00/00): ", 6) << endl;
	end();
	cout << "Generating Random Numbers: \n";
	helper::RandomNum();
	end();
}
void end()
{
	system("PAUSE");
	system("CLS");
}
void Clear()
{
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
}
