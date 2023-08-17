#include "Person.h"

// Setter function to set the person's name
void Person::setName(string name)
{
	this->name = name;
}

// Setter function to set the person's age
void Person::setAge(int age)
{
	this->age = age;
}

// Getter function to get the person's name
string Person::getName()
{
	return name;
}

// Getter function to get the person's age
int Person::getAge()
{
	return age;
}

// Print function to display the person's information
void Person::Print()
{
	cout << "\n\n\tName: " << name;
	cout << "\n\tAge: " << age;
}
