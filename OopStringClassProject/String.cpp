#include "String.h"

String::String()
{
	c_str = new char;
	*c_str = '\0';
	length = 0;
}

String::String(char str[])
{
	length = strlen(str);
	c_str = new char[length + 1];
	strcpy_s(c_str, length, str);
	c_str[length] = '\0';
}

String::String(char ch, int count)
{
	c_str = new char[count + 1];
	for (int i{}; i < count; i++)
		c_str[i] = ch;
	c_str[count] = '\0';
	length = count;
}

String::~String()
{
	delete[] c_str;
}
