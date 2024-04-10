#pragma once
#include <iostream>

class String
{
	char* c_str;
	int length;

public:
	String();
	String(const char* str);
	String(char ch, int count);
	String(const String& string);

	String operator=(const String& string);
	String operator=(char c_str[]);

	friend String operator+(const String& string1, const String& string2);
	friend String operator+(char c_str[], const String& string2);
	friend String operator+(const String& string1, char c_str[]);

	String operator+=(const String& string);
	String operator+=(char c_str[]);

	friend bool operator<(const String& string1, const String& string2);
	friend bool operator>(const String& string1, const String& string2);
	friend bool operator<=(const String& string1, const String& string2);
	friend bool operator>=(const String& string1, const String& string2);
	friend bool operator==(const String& string1, const String& string2);
	friend bool operator!=(const String& string1, const String& string2);

	friend std::ostream& operator<<(std::ostream& out, const String& string);
	friend std::istream& operator>>(std::istream& in, String& string);

	char At(int index);
	char& operator[](int index);

	int Length();

	~String();
};

