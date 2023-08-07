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
    //Get Days in course into an int array
    int daysInCourse[3] = {daysInCourse1, daysInCourse2, daysInCourse3};
    //Create a new student, and put them in the class roster
    classRosterArray[rosterPos] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeprogram);
    //Increment the roster pos
    rosterPos++;
}

void Roster::remove(std::string studentID) {
    //Find student matching student id
    for (int i = 0; i < classRosterSize; i++) {
        if (classRosterArray[i] != nullptr && studentID == classRosterArray[i]->getStudentID()) {
            //Set that position to a null pointer
            classRosterArray[i] = nullptr;
            return;
        }
    }
    //Print default message
    std::cout<<"Error: Could not remove Student " << studentID << ". ID not found.\n";
}

//Printing Methods
void Roster::printAll() {
    //Loop through class roster and print all
    for (int i = 0; i < classRosterSize; i++) {
        if (classRosterArray[i] != nullptr) {
            classRosterArray[i]->print();
        }
    }
}
void Roster::printAverageDaysInCourse(std::string studentID) {
    //Loop through class roster
    for (int i = 0; i < classRosterSize; i++) {
        //If student exists and matches the student id input
        if (classRosterArray[i] != nullptr && studentID == classRosterArray[i]->getStudentID()) {
            //Calculate the average number of days
            int avg = (classRosterArray[i]->getNumDays()[0] + classRosterArray[i]->getNumDays()[1]
            + classRosterArray[i]->getNumDays()[2]) / 3;
            //Print
            std::cout<<"Average Days In Course for Student "<< studentID << ": " << avg << "\n";
        }
    }
}
void Roster::printInvalidEmails() {
    //Loop through class roster searching for invalid emails
    for (int i = 0; i < classRosterSize; i++) {
        if (classRosterArray[i] != nullptr) {
            //Load the current email address into a string
            std::string curEmail = classRosterArray[i]->getEmailAddress();
            //Find a substring of everything after the @ symbol
            std::string curSubstring = curEmail.substr(curEmail.find("@") + 1);

            //If there isn't an @ symbol, or there isn't a . symbol, or there is white space print the email.
            if (curEmail.find("@") == std::string::npos || curSubstring.find(".") == std::string::npos
             || curEmail.find(" ") != std::string::npos) {
                std::cout<<"Invalid Email Found: " << curEmail << "\n";
            }

        }
    }
}
void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    //Fist get degreeProgram into a string
    std::string degProg;
    switch(degreeProgram) {
        case SOFTWARE:
            degProg = "SOFTWARE";
            break;
        case SECURITY:
            degProg = "SECURITY";
            break;
        case NETWORK:
            degProg = "NETWORK";
            break;
        default:
            std::cout<<"Degree Program Not Found.\n";
            return;
    }

    //Loop through the class roster and print all students of degree program 'degProg'
    for (int i = 0; i < classRosterSize; i++) {
        if (classRosterArray[i] != nullptr) {
            std::string curDegreeProgram = classRosterArray[i]->getDegree(); 
            if (curDegreeProgram.compare(degProg) == 0) {
                classRosterArray[i]->print();
            }
        }
    }
}