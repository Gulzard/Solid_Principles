#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

void create_node();
void print();

//create a node 
struct node
{
	int data;
	struct node* next;
};
 
//global assignments
node *head = NULL;

void create_node() {
	cout << "in--create_node" << endl;
	node *NewNode = (node*)malloc(1 * sizeof(node));
	if (NewNode == NULL)
	{
		cout << "Node allocation failed" << endl;
		return;
	}
	else
	{
		int data = 0;
		cout << "enter the data to be enterted" << endl;
		cin >> data;
		NewNode->data = data;
		NewNode->next = NULL;
		head = NewNode;
		print();
	}
	
}

void create_node_last()
{
	node* tmp = head;
	if (head == NULL)
	{
		cout << "List empty" << endl;
		return;
	}
	else
	{
		node *LastNode = (node*)malloc(1 * sizeof(node));
		if (LastNode == NULL)
		{
			cout << "Node allocation failed" << endl;
			return;
		}
		else {
			int data = 0;
			cout << "enter the data to be enterted last" << endl;
			cin >> data;

			LastNode->data = data;
			LastNode->next = NULL;

		}
		while(tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = LastNode;
		print();
	}
}

void create_middle_node()
{
	node* tmp = head;

	int pos = 0;
	cout << "enter the node pos" << endl;
	cin >> pos;
	cout <<  endl;

	//while (pos)
	for(int i=1; i <pos-1; i++)
	{
		tmp = tmp->next;
		//pos--;
	}
	node *midNode = (node*)malloc(1 * sizeof(node));
	if (midNode == NULL)
	{
		cout << "Mid Node allocation failed" << endl;
		return;
	}
	else {
		int data = 0;
		cout << "enter the data to be enterted middle" << endl;
		cin >> data;

		midNode->data = data;
		midNode->next = tmp->next;
		tmp->next = midNode;

	}
	print();
}

void Delete_from_front()
{
	node *temp = head;

	head = temp->next;
	free(temp);
	print();
}

void Delete_from_middle()
{
	int pos = 0;
	node *tmp = head, *prev = head;
	cout << "enter the node pos you wnat to delete" << endl;
	cin >> pos;

	while (pos)
	{
		prev = tmp;
		tmp = tmp->next;
		pos--;
	}
	prev->next = tmp->next;
	free(tmp);
	print();
}

void Delete_from_last()
{
	node *tmp =head, *prev = head;

	while (tmp->next != nullptr)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	prev->next = NULL;
	free(tmp);
	print();
}

void sort()
{
	node *curr = head;
	

	while (curr != nullptr)
	{
		node *nxt = curr->next;

		while (nxt != nullptr)
		{
					
			if (curr->data > nxt->data)
			{
				int swapNum = 0;
				swapNum = curr->data;
				curr->data = nxt->data;
				nxt->data = swapNum;
			}
			nxt = nxt->next;
		}
		curr = curr->next;
	}

			
		print();
	
}
void print()
{
	node *tmp = head;
	while (tmp != NULL)
	{
		cout << "Data##:" << tmp->data << endl;
		tmp = tmp->next;
	}
}
int main()
{
	cout << "enter the opration to be performed 1.create a node, 2. at the end, 3.in the middle" <<
		" 4. in the front," "5.delete front," "6. delete at the end," "7. Delete in the middle " << endl;
	int choice = 0;

	do {
		
		cin >> choice;

		switch (choice)
		{
		case 1:
			create_node();
			break;
		case 2:
			create_node_last();
			break;

		case 3:
			create_middle_node();
			break;

		case 4:
			Delete_from_front();
			break;

		case 5:
			Delete_from_middle();
			break;

		case 6:
			Delete_from_last();
			break;

		case 7:
			sort();
			break;
		default:
			cout << "Wrong Option" << endl;
			break;

		}
	} while (choice != 11);
	return 0;
}
