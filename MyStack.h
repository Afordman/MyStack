#pragma once

#ifndef MYSTACK_H_
#define MYSTACK_H_

#include <iostream>
using std::istream;

typedef double Item;

class MyStack
{
private:
	enum{m_Size = 1010};
	Item m_st[m_Size];
	int m_top;
	
public:
	MyStack();

	void push(Item);
	void pop();
	int size();
	Item Top();
	bool isFull();
	bool isEmpty();
};
#endif