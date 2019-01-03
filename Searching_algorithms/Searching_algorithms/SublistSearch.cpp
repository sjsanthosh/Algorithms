//Given two linked lists, the task is to check whether the first list is present in 2nd list or not.

#include<iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};


void PrintNode(Node * node) {

	while (node != NULL) {
		cout << node->data << "-> ";
		node = node->next;
	}
}

Node* newnode(int a) {
	Node* A = new Node();
	A->data = a;
	A->next = NULL;
	return A;
}

void InsertNodeToEnd(Node* head, int a) {

	Node * node = newnode(a);
	while (head->next != NULL) {

		head = head->next;
	}

	head->next = node;

}

bool checkisSubList(Node * a, Node* b) {


	if (a == NULL&& b == NULL)
		return true;

	if (a == NULL || (a == NULL && b != NULL))
		return false;

	Node* ptr1 = a;
	Node* ptr2 = b;

	while (b != NULL) {

		ptr2 = b;

		while (ptr1 != NULL)
		{

			if (ptr2 == NULL)
				return false;
			else if (ptr1->data == ptr2->data)
			{
				ptr1 = ptr1->next;
				ptr2 = ptr2->next;
			}
			else
				break;
		}

		if (ptr1 == NULL)
		{
			return true;
		}

		b = b->next;
	}
	return false;
}
int main() {

	//a:1-2-3-4-5
	//b:1-2-3-4-5-6-7-8-9

	Node *a = newnode(1);
	InsertNodeToEnd(a, 2);
	InsertNodeToEnd(a, 3);
	InsertNodeToEnd(a, 4);
	InsertNodeToEnd(a, 5);

	Node *b = newnode(1);
	InsertNodeToEnd(b, 2);
	InsertNodeToEnd(b, 9);
	InsertNodeToEnd(b, 4);
	InsertNodeToEnd(b, 5);
	InsertNodeToEnd(b, 6);
	InsertNodeToEnd(b, 7);
	InsertNodeToEnd(b, 8);



	PrintNode(a);
	cout << endl;
	PrintNode(b);
	cout << endl;

	bool retsult = checkisSubList(a, b);
	if (retsult)
	{
		cout << "yes, a is found in b";
	}
	else {
		cout << "a is not part of b";
	}

	getchar();
	return 0;
}