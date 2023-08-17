#pragma once
#include "Person.h"
class Teacher : public Person
{
private:
	string subject; // Private member variable to store teacher's subject

public:
	// Constructor to initialize the teacher's name, age, and subject
	Teacher(string name, int age, string subject);

	// Function to retrieve the subject taught by the teacher
	string getSubject();

	// Function to set the subject taught by the teacher
	void setSubject(string subject);

	// Override the Print function to display teacher's information and subject
	void Print() override;
};


