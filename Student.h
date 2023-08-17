#pragma once
#include "Person.h"
#include <iostream>
using namespace std;
class Student : public Person
{
private:
	int marks[10]; // Private member variable to store student's marks for 10 subjects

public:
	// Constructor to initialize the student's name, age, and generate random marks
	Student(string, int);

	// Function to calculate and return the average mark of the student
	int calculateAverageMark();

	// Override the Print function to display student's information and average mark
	void Print() override;
};
