#include "NumberList.h"
#include <string>
#include <iostream>
using namespace std;


void NumberList::insert(int num) {
	ListNode* newNode;
	ListNode* nodePtr;

	newNode = new ListNode;
	newNode->value = num;
	newNode->next = nullptr;

	if (head == nullptr) {
		head = newNode;
	}
	else {
		nodePtr = head;

		while (nodePtr->next != nullptr) {
			nodePtr = nodePtr->next;
			
		}
		nodePtr->next = newNode;
	}
}

void NumberList::display() {
	ListNode* temp;

	temp = head;

	while (temp != nullptr) {

		cout << temp->value << " ";
		temp = temp->next;


	}








}


NumberList::~NumberList() {

	ListNode* temp;
	
	temp = head;

	while (temp != nullptr) {

		head = head->next;

		delete temp;

		temp = head;

		


	}



}