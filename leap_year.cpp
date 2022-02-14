#include "leap_year_utils.cpp"



int main() {
  std::string input;
  int year;

  while (1)
  {
	std::cout << "=============================================\n";
    std::cout << "Please input your year:\n";
	input = GetInput();
	InputChecker(input);
	year = GetYear(input);
	if (YearChecker(year) == true)
		LeapYearChecker(year);
	else
		continue;
  }
}