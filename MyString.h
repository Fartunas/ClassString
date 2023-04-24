#pragma once
#include <iostream>
class MyString
{
private:

	char* str;
	int size;
public:

	MyString() 
	{
		size = 0;
		str = nullptr;
	}

	MyString(const char* s)
	{
		size = strlen(s);
		str = new char[size];
		for (int i = 0; i < size; i++) 
		{
			str[i] = s[i];
		}
		size++;
	}

	MyString(const MyString& other) 
	{
		this->size = other.size;
		this->str = new char[this->size];
		for (int i = 0; i < this->size; i++) 
		{
			this->str[i] = other.str[i];
		}
	}

	~MyString() 
	{
		delete[] str;
	}

	void Show();
	MyString operator+(const MyString&other) {
		MyString temp;
		temp.size = this->size + other.size;
		temp.str = new char[size]-1;
		int i = 0;
		while (this->str[i] != '\0')
		{
			temp.str[i] = this->str[i];
			i++;
		}
		i = 0;
		while (other.str[i] != '\0')
		{
			temp.str[i] = other.str[i];
			i++;
		}
		temp.str[size] = '\0';
		return temp;
	}
};

