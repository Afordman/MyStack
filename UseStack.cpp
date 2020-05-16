#include "MyStack.h"
#include <iostream>

using std::cout;
using std::cin;

int i;

int main()
{
	MyStack* Stk1 = new MyStack;
	Item* read = new Item;
	
	char n;

	cout << "How Many Numbers do you want to Enter?\n";
	cin >> n;
	if (n < '0' || n > '9')
	{
		cout << "Wrong Read! Please Enter it Again!\n";
		while (true)
		{
			cin >> n;
			if (n >= '0' && n <= '9')
				break;
			cout << "Wrong Read! Please Enter it Again!\n";
		}
	}

	cout << "Stk1 now has " << Stk1->size() << " numbers\n";

	int ms = n - '0';
	cout << "\nPlease enter " << ms << " numbers.\n";
	for (i = 0; i < ms; i++)
	{
		cin >> *read;
		Stk1->push(*read);
	}

	cout << "\nStk1 now has " << Stk1->size() << " numbers\n";

	for (i = Stk1->size(); i > 0; i--)
	{
		cout << "The " << i << " number of Stk1 is: " << Stk1->Top();
		cout << "\nStk1->pop()\n";
		Stk1->pop();
		cout << "Now Stk1 has " << Stk1->size() << " numbers\n\n";
	}

	cout << "Done!\n";
	system("pause");

	delete Stk1;
	delete read;
}