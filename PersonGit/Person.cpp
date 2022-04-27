#include "Person.h"

Person::Person() = default;

Person::Person(const string& name, const string& surname)
{
	this->name = name;
	this->surname = surname;
}

const string& Person::getName() const
{
	return name;
}

const string& Person::getSurname() const
{
	return surname;
}
