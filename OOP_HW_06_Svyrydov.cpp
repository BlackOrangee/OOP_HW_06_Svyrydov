// Create a Person base class that contains fields for name and age.
// Next, create Studentand Teacher subclasses that inherit the Person class.
// In the Student subclass, add a field for the gradesand a method to calculate the GPA, 
// and in the Teacher subclass, add a field for the subject taughtand a method to display information about the teacher.
// Create an array of studentsand teachers, output information about each person using polymorphism.
//

#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
using namespace std;

// Function to input teacher's information from the user
void EnterTeacher(string& name, int& age, string& subject)
{
    cout << "\n\n\tEnter the teacher's name: ";   cin >> name;
    cout << "\n\tEnter the teacher's age: ";   cin >> age;
    cout << "\n\tEnter the teacher's subject: ";   cin >> subject;
}


// Function to input student's information from the user
void EnterStudent(string& name, int& age)
{
    cout << "\n\n\tEnter the student's name: ";   cin >> name;
    cout << "\n\tEnter the student's age: ";   cin >> age;
}


// Function to print information about an array of Person objects
void Print(Person** clas)
{
    for (int i = 0; i < 3; i++)
    {
        clas[i]->Print();  // Print information of each person object in the array
    }
}


int main()
{
    srand(time(NULL)); // Seed the random number generator

    string name;
    int age = 0;
    string subject;

    // Create an array of Person objects
    Person** clas = new Person*[3];

    // Enter details for the first teacher
    EnterTeacher(name, age, subject);
    clas[0] = new Teacher(name, age, subject);

    // Enter details for the first student
    EnterStudent(name, age);
    clas[1] = new Student(name, age);

    // Enter details for the second student
    EnterStudent(name, age);
    Student s2(name, age);
    clas[2] = new Student(name, age);

    // Print the information of all persons in the array
    Print(clas);

    // Clean up memory allocated for the array
    delete[] clas;

}