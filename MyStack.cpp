#include "MyStack.h"

MyStack::MyStack()
{
	m_top = 0;
}

bool MyStack::isEmpty()
{
	return m_top;
}

bool MyStack::isFull()
{
	if (m_top >= m_Size - 10)
		return false;
	return true;
}

void MyStack::push(Item n)
{
	this->m_st[++m_top] = n;
}

void MyStack::pop()
{
	m_top--;
}

int MyStack::size()
{
	return m_top;
}

Item MyStack::Top()
{
	return m_st[m_top];
}