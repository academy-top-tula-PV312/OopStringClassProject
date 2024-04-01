#pragma once
#include <iostream>

class String
{
	char* c_str;
	int length;

public:
	String();
	String(char str[]);
	String(char ch, int count);

	~String();
};

