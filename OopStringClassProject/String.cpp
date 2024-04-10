#include "String.h"

String::String()
{
	c_str = new char;
	*c_str = '\0';
	length = 0;
}

String::String(const char* str)
{
	length = strlen(str);
	this->c_str = new char[length + 1];

	for (int i{}; i < length; i++)
		c_str[i] = str[i];

	this->c_str[length] = '\0';
}

String::String(char ch, int count)
{
	c_str = new char[count + 1];

	for (int i{}; i < count; i++)
		c_str[i] = ch;

	c_str[count] = '\0';

	length = count;
}

String::String(const String& string)
{
	this->length = string.length;
	this->c_str = new char[this->length + 1];

	for (int i{}; i < this->length + 1; i++)
		this->c_str[i] = string.c_str[i];
}

String String::operator=(const String& string)
{
	/*delete[] this->c_str;

	this->length = string.length;
	this->c_str = new char[this->length + 1];

	for (int i{}; i < this->length + 1; i++)
		this->c_str[i] = string.c_str[i];*/
	*this = string.c_str;

	return *this;
}

String String::operator=(char c_str[])
{
	delete[] this->c_str;

	this->length = strlen(c_str);
	this->c_str = new char[this->length + 1];

	for (int i{}; i < this->length + 1; i++)
		this->c_str[i] = c_str[i];

	return *this;
}


char String::At(int index)
{
	//if(index < 0 || index > length)
	return this->c_str[index];
}

char& String::operator[](int index)
{
	return this->c_str[index];
}

int String::Length()
{
	return length;
}

String::~String()
{
	delete[] c_str;
}

std::ostream& operator<<(std::ostream& out, const String& string)
{
	out << string.c_str;
	return out;
}

std::istream& operator>>(std::istream& in, String& string)
{
	/*delete[] string.c_str;
	string.c_str = new char;
	in.getline(string.c_str, SHRT_MAX);
	
	string.length = in.gcount() - 1;
	string.c_str[in.gcount()] = '\0';*/

	char* str = new char;
	in.getline(str, SHRT_MAX);
	string = str;

	return in;
}

bool operator<(const String& string1, const String& string2)
{
	return strcmp(string1.c_str, string2.c_str) < 0;
}

bool operator>(const String& string1, const String& string2)
{
	return strcmp(string1.c_str, string2.c_str) > 0;
}

bool operator==(const String& string1, const String& string2)
{
	return strcmp(string1.c_str, string2.c_str) == 0;
}
