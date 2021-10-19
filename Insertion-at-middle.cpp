#include "header.h"

bool list::insertMiddle(int index, int value)
{
	node* newNode = new node();
	node* temp = head;
	int c = 1;
	newNode->data = value;
	while (c < index - 1 && temp != NULL)
	{
		c++;
		temp = temp->next;
	}
	if (temp != NULL)
	{
		newNode->next = temp->next;
		temp->next = newNode;
		newNode->prev = temp;
		temp->next->prev = newNode;
		return 1;
	}
	else
	{
		return 0;
	}
}