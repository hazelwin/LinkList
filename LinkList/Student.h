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

	private:
		int idNumber;
		std::string name;
		CourseNode* courses;
	};
}

#endif