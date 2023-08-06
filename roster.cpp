#include <iostream>
#include "roster.h"
#include "string"

//Constructor
Roster::Roster() {
    classRosterArray[0] = new Student("200215493", "Jeremiah", "Johnson", "ajohnson132490@gmail.com", 21, new int[3]{2, 3, 4}, SOFTWARE); 
}
//Mutator Methods
void Roster::add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age,
 int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {
    //Get the Days into an array
    int daysInCourse[] = {daysInCourse1, daysInCourse2, daysInCourse3};
    int size = (int)(sizeof(classRosterArray)/sizeof(classRosterArray[0])) + 1;

    Student* newArr = new Student[size];

    if (size > 2) {
        for(int i = 0; i < size; i++) {
            //newArr[i] = (*classRosterArray[i]);
            std::cout<<(newArr[i]).getFirstName();
        }
    } else {
        std::cout<<"Love"<<"\n";
        classRosterArray[1] = new Student(studentID, firstName, lastName, emailAddress, age,
    daysInCourse, degreeprogram);
    }
 }
void Roster::remove(std::string studentID) {

}

//Printing Methods
void Roster::printAll() {
    for (int i = 0; i < (int)((int)(sizeof(classRosterArray)/sizeof(classRosterArray[0]))); ++i) {
        //std::string ttp = classRosterArray[i].getFirstName();
        std::cout<<"test";
    }
}
void Roster::printAverageDaysInCourse(std::string studentID) {

}
void Roster::printInvalidEmails() {

}
void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {

}