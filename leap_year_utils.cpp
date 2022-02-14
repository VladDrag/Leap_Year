#include <iostream>
#include <string>

std::string GetInput(){
	std::string number;
	if (!(std::cin >> number))
		throw "Input could not be taken!\n";
	return (number);
}

void InputChecker(std::string input)
{
	if (input.empty())
		std::cerr << "Please choose another year, larger than 999!";
	else if (input == "exit")
	{
		std::cerr <<"Thank you for checking our program. Closing program.\n";
		exit(0);
	}
}

int GetYear(std::string input)
{
	int year;
	try {year = stoi(input);}
	catch(const std::invalid_argument& ia) {
		std::cerr << "<<<Invalid argument!>>>\n";
		std::cerr << "Please input a valid year (i.e. 1999)\n";
		return (-1);
  	}
	return (year);
}

bool YearChecker(int year)
{
	if (year == -1)
		return (false);
	if (year < 1000)
    {
      std::cerr << "Please choose another year, larger than 999!\n";
      return (false);
    }
	return (true);
}

void LeapYearChecker(int year)
{
	if (year % 4 == 0)
	{
		if ((year % 100 == 0) && (year % 400 != 0))
			std::cout << "The year " << year << " is not a leap year.\n";
		else if (year % 400 == 0)
			std::cout << "The year " << year << " is a leap year.\n";
	}
	else
		std::cout << "The year " << year << " is not leap year.\n";
}