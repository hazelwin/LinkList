// Student.h

#include"Course.h"

#ifndef	STUDENT_LOCK
#define STUDENT_LOCK

namespace student_namespace
{
	class Student
	{
	public:
		Student();

	private:
		int idNumber;
		std::string name;
		//list of courses??
	};
}

#endif