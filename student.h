#ifndef STUDENT_H_
#define STUDENT_H_

//#include "string"
//#include "degree.h"

class Student {
    public:
        Student(unsigned int studentID);
        void getStudentID() ;

    private:
        unsigned int studentID;

};
#endif

/*        std::string firstName;
        std::string lastName;
        std::string emailAddress;
        unsigned short int age;
        int numDays;
        DegreeProgram degree;*/