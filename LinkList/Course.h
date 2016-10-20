// Course.h

#include<string>

#ifndef COURSE_LOCK
#define COURSE_LOCK

namespace course_namespace
{
	class Course
	{
	public:
		// CONSTRUCTORS
		Course(std::string name, double unit, char grade);

		// GET FUNCTIONS
		std::string getName(void) { return name; }
		double getUnit(void) { return unit; }
		char getGrade(void) { return grade; }

	private:
		std::string name;
		double unit;
		char grade;
	};
}

#endif