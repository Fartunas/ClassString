#include "MyString.h"
#include <iostream>

void MyString::Show()
{
	for (int i = 0; i < size-1; i++) 
	{
		std::cout << str[i];
	}
}
