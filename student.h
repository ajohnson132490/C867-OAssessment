#ifndef STUDENT_H_
#define STUDENT_H_

#include "string"
#include "degree.h"

class Student {
    public:
        //Primary constructor
        Student(std::string studentID, std::string firstName, std::string lastName,
        std::string emailAddress, int age, int numDays[], DegreeProgram degree);

        //Accessor Methods
        std::string getStudentID();
        std::string getFirstName();
        std::string getLastName();
        std::string getEmailAddress();
        int getAge();
        int* getNumDays();
        std::string getDegree();

        //Mutator Methods
        void setStudentID(std::string studentID);
        void setFirstName(std::string firstName);
        void setLastName(std::string lastName);
        void setEmailAddress(std::string emailAddress);
        void setAge(int age);
        void setNumDays(int numDays[3]);
        void setDegree(DegreeProgram degree);

        //Print Method
        void print();


    private:
        std::string studentID;
        std::string firstName;
        std::string lastName;
        std::string emailAddress;
        int age;
        int numDays[3];
        DegreeProgram degree;

};

#endif