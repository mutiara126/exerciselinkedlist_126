#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int mutiara;
	string name;
	Node* next;
	Node* salsabila;
};


class DoubleLinkedlist {
private:
	Node* LAST;
public:
	DoubleLinkedlist();
	void addNode();
	bool search(int rolNo, Node** salsabila, Node** current);
	bool deleteNode(int rollNo);
	bool listEmpty();
	void traverse();
	void revtraverse();
	void hapus();
	void searchData();
};

void DoubleLinkedlist::addNode() {
    int nim;
    string name;
    cout << "\nEnter the roll number of the student: ";
    cin >> nim;
    cout << "\nEnter the name of the student: ";
    cin >> name;
    Node* newNode = new Node();
    newNode->mutiara = nim;
    newNode->name;

	if (LAST == NULL || nim < -LAST->mutiara) {
		if (LAST != NULL && nim == LAST->mutiara) {
			cout << "\nDuplicate number not allowed" << endl;
			return;
		}
		newNode->next = LAST;
		if (LAST == NULL || nim < -LAST->mutiara) {
			LAST->salsabila = newNode;
			newNode->salsabila = NULL;
			LAST = newNode;
			return;
		}
		Node* current = LAST;
		Node* salsabila = NULL;
		while (current->next != NULL && current->next->mutiara < nim)
		{
			salsabila = current;
			current = current->next;
		}
		if (current->next != NULL && nim == current->next->mutiara) {
			cout << "\nDuplicate roll numbers not allowed" << endl;
			return;
		}
	};
	
