//write include statement for decisions header
#include <string>
#include "decisions.h"
//Write code for function get_grade_points that accepts a string letter_grade and returns 
//the grade_points for as follows:
std::string get_grade_points(std::string letter_grade);



}






//Write code for function calculate_gpa that accepts an int named credit_hours and
//a double named credit_points.  The function returns the quotient of credit_points divided by
//credit_hours. In the function account for division by zero by returning a -1.

int get_grade_points(std::string letter_grade)
{
	return 0;
}

std::string get_grade_points(string letter_grade)
{
	return std::string();
}

int get_grade_points(string letter_grade)
{
	//given grade "A" returns 4
	if (letter_grade == 'A')
	{
		return get_grade_points = 4.0;
	}
	//given grade "B" returns 3
	else if (letter_grade == 'B')
	{
		return get_grade_points = 3.0;
	}
	//given grade "C" returns 2
	else if (letter_grade == 'C')
	{
		return get_grade_points = 2.0;
	}
	//given grade "D" returns 1
	else if (letter_grade == 'D')
	{
		return get_grade_points = 1.0;
	}
	//given grade "F" returns 0
	else if (letter_grade == 'D')
	{
		return get_grade_points = 0;
	}
	//another other value return -1
	else
	{
		return "Invalid grade"
	return 0;
}
