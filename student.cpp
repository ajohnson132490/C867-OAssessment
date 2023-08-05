#include "iostream"
#include "student.h"

using namespace std;

//Student Constructor
Student::Student(unsigned int studentID, std::string firstName, std::string lastName,
        std::string emailAddress, unsigned short int age, int numDays[], DegreeProgram degree) {
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;
    int len = sizeof(numDays)/sizeof(numDays[0]);
    for (int i = len; i >= 0; i--) {
        this->numDays[i] = numDays[i];
    }
    this->degree = degree;
}

//Student Accessor Methods
unsigned int Student::getStudentID() {
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
unsigned short int Student::getAge() {
    return age;
}
int* Student::getNumDays() {
    return numDays;
}
DegreeProgram Student::getDegree() {
    return degree;
}

//Mutator Methods
void Student::setStudentID(unsigned int studentID) {
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
void Student::setAge(unsigned short int age) {
        this->age = age;
}
void Student::setNumDays(int numDays[2]) {
    //Work in limits?
for (int i = 3; i >= 0; i--) {
        this->numDays[i] = numDays[i];
    }
}
void Student::setDegree(DegreeProgram degree) {
        this->degree = degree;
}