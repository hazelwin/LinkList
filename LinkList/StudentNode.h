// StudentNode.h

#ifndef STUDENTNODE_LOCK
#define STUDENTNODE_LOCK

#include"Student.h"
using namespace student_namespace;

class StudentNode
{
public:
	typedef Student value_type;

	StudentNode(const value_type& initialData = value_type(), StudentNode* initialLink = NULL);

private:
	value_type dataField;
	StudentNode* linkField;
};

#endif