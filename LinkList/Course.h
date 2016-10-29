// Course.h

#ifndef COURSE_LOCK
#define COURSE_LOCK

#include<string>

namespace course_namespace
{
	class Course
	{
	public:
		// CONSTRUCTORS
		Course(std::string name = "unknown class", double unit = 3, char grade = 'C');
		// OVERLOADED OPERATORS
		Course &operator=(const Course &source);

		// SET FUNCTIONS
		void setName(const std::string& name);
		void setUnit(const double& unit);
		void setGrade(const char& grade);
		// GET FUNCTIONS
		std::string getName(void) const { return name; }
		double getUnit(void) const { return unit; }
		char getGrade(void) const { return grade; }

	private:
		std::string name;
		double unit;
		char grade;
	};
}

#endif