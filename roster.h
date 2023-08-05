#ifndef ROSTER_H_
#define ROSTER_H_

#include "student.h"

class Roster {
    public:
        //Mutator Methods
        void add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age,
         int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);
        void remove(std::string studentID);
        
        //Printing Methods
        void printAll();
        void printAverageDaysInCourse(std::string studentID);
        void printInvalidEmails();
        void printByDegreeProgram(DegreeProgram degreeProgram);

    private:
        //List of all students
        Student** classRosterArray;
};

#endif