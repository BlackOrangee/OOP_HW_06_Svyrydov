#include "Teacher.h"

// Constructor for the Teacher class
Teacher::Teacher(string name, int age, string subject)
{
	// Calling the base class setters to set name and age
	setName(name);
	setAge(age);

	// Setting the subject
	this->subject = subject;
}

// Function to retrieve the subject taught by the teacher
string Teacher::getSubject()
{
	return subject;
}

// Function to set the subject taught by the teacher
void Teacher::setSubject(string subject)
{
	this->subject = subject;
}

// Override of the Print function to display teacher's information and subject
void Teacher::Print()
{
	cout << "\n\n\tName: " << getName();
	cout << "\n\tAge: " << getAge();
	cout << "\n\tSubject: " << subject;
}
