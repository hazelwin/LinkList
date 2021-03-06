#include "Student.h"

namespace student_namespace
{
	Student::Student(CourseNode courses, int idNumber = 0, std::string name = "unknown student")
	{
		this->idNumber	= idNumber;
		this->name		= name;
	}
	void Student::setIdNumber(const int & idNumber)
	{
		this->idNumber = idNumber;
	}
	void Student::setName(const std::string name)
	{
		this->name = name;
	}
}
