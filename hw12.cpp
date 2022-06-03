// hw12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "NumberList.h"
using namespace std;

int main()
{
    NumberList list;

    list.insert(31);
    list.insert(11);
    list.insert(70);
    list.insert(24);
    list.insert(9);
    list.insert(4);

    cout << "The Linked List is: ";
    list.display();
}

