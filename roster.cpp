#include <iostream>
#include "roster.h"
#include "string"

//Constructor
Roster::Roster() {
    //Load the classRoster with null pointers in case all spots aren't full
    for (int i = 0; i < classRosterSize; i++) {
        classRosterArray[i] = nullptr;
    }
}

//Mutator Methods
void Roster::add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age,
 int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {
    int daysInCourse[3] = {daysInCourse1, daysInCourse2, daysInCourse3};
    classRosterArray[rosterPos] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeprogram);
    rosterPos++;
}

void Roster::remove(std::string studentID) {
    for (int i = 0; i < classRosterSize; i++) {
        if (classRosterArray[i] != nullptr && studentID == classRosterArray[i]->getStudentID()) {
            classRosterArray[i] = nullptr;
            return;
        }
    }
    std::cout<<"Error: Could not remove Student " << studentID << ". ID not found.\n";
}

//Printing Methods
void Roster::printAll() {
    for (int i = 0; i < classRosterSize; i++) {
        if (classRosterArray[i] != nullptr) {
            classRosterArray[i]->print();
        }
    }
}
void Roster::printAverageDaysInCourse(std::string studentID) {
    for (int i = 0; i < classRosterSize; i++) {
        if (classRosterArray[i] != nullptr && studentID == classRosterArray[i]->getStudentID()) {
            int avg = (classRosterArray[i]->getNumDays()[0] + classRosterArray[i]->getNumDays()[1]
            + classRosterArray[i]->getNumDays()[2]) / 3;
            std::cout<<"Average Days In Course for Student "<< studentID << ": " << avg << "\n";
        }
    }
}
void Roster::printInvalidEmails() {
    for (int i = 0; i < classRosterSize; i++) {
        if (classRosterArray[i] != nullptr) {
            std::string curEmail = classRosterArray[i]->getEmailAddress();
            if (curEmail.find("@") == std::string::npos || curEmail.find(".") == std::string::npos
             || curEmail.find(" ") != std::string::npos) {
                std::cout<<"Invalid Email Found: " << curEmail << "\n";
            }
        }
    }
}
void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {

}