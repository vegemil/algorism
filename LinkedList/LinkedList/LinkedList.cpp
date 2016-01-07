// LinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

struct Node
{
	int data;
	Node* next;
};

struct List
{
	Node *head;
	Node *tail;
	Node *current;

	int count;
};

void NodeInit(List *list)
{
	list->head = NULL;
	list->current = NULL;
	list->tail = NULL;

	list->count = 0;
}

void NodeInsert(List *list, int data)
{
	Node *newNode = new Node();
	newNode->data = data;
	newNode->next = NULL;

	if (list->head == NULL)
	{
		list->head = newNode;
	}
	else
	{
		list->tail->next = newNode;
	}

	list->tail = newNode;
	list->count++;
}

Node* CurFirst(List *list)
{
	if (list->head == NULL)
	{
		return false;
	}

	list->current = list->head;
	return list->current;
}

Node* CurNext(List *list)
{
	if (list->current->next == NULL)
	{
		return false;
	}

	list->current = list->current->next;
	return list->current;
}

void NodeRemove(List *list)
{

	Node* temp = list->current->next;

	delete(list->current);

	list->current = temp;
	list->count--;
}

int main()
{
	List list;
	
	NodeInit(&list);

	for (int i = 0; i < 4; i++)
		NodeInsert(&list, i);

	if (CurFirst(&list))
	{
		std::cout<< list.current->data << std::endl;

		while (CurNext(&list))
		{
			std::cout << list.current->data << std::endl;
		}
	}

	std::cout << list.count << std::endl;

	if (CurFirst(&list))
	{
		std::cout << list.current->data << " 삭제" <<std::endl;
		NodeRemove(&list);

		for (int i = 0; i < list.count;)
		{
			std::cout << list.current->data << " 삭제" << std::endl;
			NodeRemove(&list);
		}
	}
}