#pragma once
#ifndef NumberList_h
#define NumberList_h

class NumberList
{
private:
	struct ListNode {
		int value;
		struct ListNode* next;
	};

	ListNode* head;

public:
	NumberList() {
		head = nullptr;
	}

	~NumberList();

	void insert(int num);
	void display();
};

#endif NumberList_h

