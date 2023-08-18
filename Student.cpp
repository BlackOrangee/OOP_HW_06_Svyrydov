#include "Student.h"

// Constructor for the Student class
Student::Student(string name, int age) : Person(name, age)
{
	// Generating random marks for each subject
	for (int i = 0; i < 10; i++)
	{
		marks[i] = rand() % 12;
	}
}

// Function to calculate the average mark of the student
int Student::calculateAverageMark()
{
	int averageMark = 0;

	for (int i = 0; i < 10; i++)
	{
		averageMark += marks[i];
	}
	return averageMark / 10; // Calculating the average mark
}

// Override of the Print function to display student's information and average mark
void Student::Print()
{
	cout << "\n\n\tName: " << getName();
	cout << "\n\tAge: " << getAge();
	cout << "\n\tAverage mark: " << calculateAverageMark();
}
