// CourseNode.cpp

#include "CourseNode.h"




CourseNode::CourseNode(const value_type& initialData = value_type(), CourseNode* initialLink = NULL)
{
	dataField = initialData;
	linkField = initialLink;
}