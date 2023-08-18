#include "Person.h"

// Constructor for the Person class
Person::Person(string name, int age)
{
	this->name = name;
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
