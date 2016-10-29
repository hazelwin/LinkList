// CourseNode.h

#ifndef COURSENODE_LOCK
#define COURSENODE_LOCK

#include"Course.h"
using namespace course_namespace;

class CourseNode
{
public:
	typedef Course value_type;

	CourseNode(const value_type& initialData = value_type(), CourseNode* initialLink = NULL);

private:
	value_type dataField;
	CourseNode *linkField;
};

#endif

