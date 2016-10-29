// Main.cpp
// Oscar Ortiz
// This program will be used to keep a course list for students in a college.

//#include"LinkList.h"
#include"Course.h"
#include<iostream>
#include<string>
#include"Tools.h"
//using namespace linklist_namespace;
using namespace course_namespace;
using namespace tools;

int main(void)
{
	int id = getInteger("Enter student ID: ");
	std::string name = getString("Enter student name: ");
	std::string course = getString("Enter course name: ");
	int unit = getInteger("Enter class units: ");
	char grade = getChar("Enter grade: ");



	

	std::cin.ignore(999, '\n');
	return 0;
}

////////////////////// NOTES////////////////////////////////
// Pointer to course list should be part student data field