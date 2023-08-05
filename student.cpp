#include <iostream>
#include "student.h"

using namespace std;

//Student Constructor
Student::Student(std::string studentID, std::string firstName, std::string lastName,
        std::string emailAddress, int age, int numDays[], DegreeProgram degree) {
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;
    int len = (int)(sizeof(numDays[0]));
    for (int i = len; i >= 0; i--) {
        this->numDays[i] = numDays[i];
    }
    this->degree = degree;
}

//Student Accessor Methods
std::string Student::getStudentID() {
    return studentID;
}
std::string Student::getFirstName() {
    return firstName;
}
std::string Student::getLastName() {
    return lastName;
}
std::string Student::getEmailAddress() {
    return emailAddress;
}
int Student::getAge() {
    return age;
}
int* Student::getNumDays() {
    return numDays;
}
std::string Student::getDegree() {
    if (degree == SOFTWARE) {
        return "SOFTWARE";
    } else if (degree == SECURITY) {
        return "SECURITY";
    } else if (degree == NETWORK) {
        return "NETWORK";
    } else {
        return "";
    }
}

//Mutator Methods
void Student::setStudentID(std::string studentID) {
        this->studentID = studentID;
}
void Student::setFirstName(std::string firstName) {
        this->firstName = firstName;
}
void Student::setLastName(std::string lastName) {
        this->lastName = lastName;
}
void Student::setEmailAddress(std::string emailAddress) {
        this->emailAddress = emailAddress;
}
void Student::setAge(int age) {
        this->age = age;
}
void Student::setNumDays(int numDays[2]) {
for (int i = 3; i >= 0; i--) {
        this->numDays[i] = numDays[i];
    }
}
void Student::setDegree(DegreeProgram degree) {
        this->degree = degree;
}

//Student Print Method
void Student::print() {
    std::cout<<"Student ID: "<<this->getStudentID()<<"\n";
    std::cout<<"First Name: "<<this->getFirstName()<<"\n";
    std::cout<<"Last Name: "<<this->getLastName()<<"\n";
    std::cout<<"Email Address: "<<this->getEmailAddress()<<"\n";
    std::cout<<"Age: "<<this->getAge()<<"\n";
    std::cout<<"Days in Course: {"<<this->getNumDays()[0]<<
    ", "<<this->getNumDays()[1]<<", "<<this->getNumDays()[2]<<"}\n";
    std::cout<<"Degree Program: "<<this->getDegree()<<"\n";
}