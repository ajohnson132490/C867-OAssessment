#include <iostream>
#include "roster.h"

//Mutator Methods
void Roster::add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age,
 int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {
    //Get the Days into an array
    int daysInCourse[] = {daysInCourse1, daysInCourse2, daysInCourse3};
    std::cout<<(int)(sizeof(classRosterArray)/sizeof(classRosterArray[0])) + 1;

    //Create a new student, array, and pointer for array
    Student* tmp = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeprogram);
    Student* newClassRosterArray[(int)(sizeof(classRosterArray)/sizeof(classRosterArray[0])) + 1];

    //Add the new student in at the top of the list
    newClassRosterArray[0] = tmp;

    //Transfer over the rest of the students
    for (int i = 0; i < (int)((int)(sizeof(classRosterArray)/sizeof(classRosterArray[0]))); i++) {
        newClassRosterArray[i+1] = classRosterArray[i];
    }

    //Be good to the memory
    classRosterArray = newClassRosterArray;

 }
void Roster::remove(std::string studentID) {

}

//Printing Methods
void Roster::printAll() {
    for (int i = 0; i < (int)((int)(sizeof(classRosterArray)/sizeof(classRosterArray[0]))); i++) {
        std::cout<<classRosterArray[i]->getFirstName();
    }
}
void Roster::printAverageDaysInCourse(std::string studentID) {

}
void Roster::printInvalidEmails() {

}
void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {

}