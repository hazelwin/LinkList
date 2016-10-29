// Student.h

#ifndef	STUDENT_LOCK
#define STUDENT_LOCK

#include"CourseNode.h"

//using namespace course_namespace;

namespace student_namespace
{
	class Student
	{
	public:
		Student(CourseNode courses, int idNumber = 0, std::string name = "unknown student");

		// SET FUNCTIONS
		void setIdNumber(const int& idNumber);
		void setName(const std::string name);
		// GET FUNCTIONS
		int getIdNumber(void) const { return idNumber; }
		std::string getName(void) const { return name; }

	private:
		int idNumber;
		std::string name;
		CourseNode* courses;
	};
}

#endif