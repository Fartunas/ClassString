#include <iostream>
#include "MyString.h"

int main() {
	MyString a("sgdgh");
	MyString b("123");
	MyString rezult;
	rezult = a + b;
	rezult.Show();
}