#ifndef STUDENT_H_
#define STUDENT_H_

#include "string"
#include "degree.h"

class Student {
    public:
        //Primary constructor
        Student(unsigned int studentID, std::string firstName, std::string lastName,
        std::string emailAddress, unsigned short int age, int numDays[], DegreeProgram degree);

        //Accessor Methods
        unsigned int getStudentID();
        std::string getFirstName();
        std::string getLastName();
        std::string getEmailAddress();
        unsigned short int getAge();
        int* getNumDays();
        std::string getDegree();

        //Mutator Methods
        void setStudentID(unsigned int studentID);
        void setFirstName(std::string firstName);
        void setLastName(std::string lastName);
        void setEmailAddress(std::string emailAddress);
        void setAge(unsigned short int age);
        void setNumDays(int numDays[3]);
        void setDegree(DegreeProgram degree);

        //Print Method
        void print();


    private:
        unsigned int studentID;
        std::string firstName;
        std::string lastName;
        std::string emailAddress;
        unsigned short int age;
        int numDays[3];
        DegreeProgram degree;

};

#endif