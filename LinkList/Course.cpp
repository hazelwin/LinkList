// Course.cpp

#include "Course.h"

namespace course_namespace
{
	Course::Course(std::string name, double unit, char grade)
	{
		this->name	= name;
		this->unit	= unit;
		this->grade = grade;
	}

	Course & Course::operator=(const Course & source)
	{
		name	= source.name;
		unit	= source.unit;
		grade	= source.grade;

		return *this;
	}

	void Course::setName(const std::string& name)
	{
		this->name = name;
	}

	void Course::setUnit(const double& unit)
	{
		this->unit = unit;
	}
	void Course::setGrade(const char& grade)
	{
		this->grade = grade;
	}

}


