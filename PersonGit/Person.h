#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person
{
	string name;
	string surname;

public:

	Person();
	Person(const string& name, const string& surname);

	int getGroup()const;
	const string& getName()const;
	const string& getSurname()const;
};

