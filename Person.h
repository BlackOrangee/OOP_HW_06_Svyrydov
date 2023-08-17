#pragma once
#include <iostream>
using namespace std;

class Person
{
private:
	string name; // Variable to store the person's name
	int age;    // Variable to store the person's age

public:
	// Setter function to set the person's name
	void setName(string name);

	// Setter function to set the person's age
	void setAge(int age);

	// Getter function to retrieve the person's name
	string getName();

	// Getter function to retrieve the person's age
	int getAge();

	// Virtual function to print the person's information, to be overridden by subclasses
	virtual void Print();
};


