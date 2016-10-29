#include "StudentNode.h"

StudentNode::StudentNode(const value_type & initialData, StudentNode* initialLink)
{
	dataField = initialData;
	linkField = initialLink;
}
