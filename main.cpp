#include <iostream>
#include "student.h"
#include "roster.h"

int main() {
    //Print out my information
    std::cout<<"Scripting and Programming - Applications - C867\n";
    std::cout<<"Programmed in C++\n";
    std::cout<<"Student ID: 009925209\n";
    std::cout<<"Austin Johnson\n";

    //Create and populate classRoster
    Roster classRoster;
    classRoster.add("A1", "John", "Smith", "John1989@gm ail.com", 20, 30, 35, 40, SECURITY);
    classRoster.add("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, 50, 30, 40, NETWORK);
    classRoster.add("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, 20, 40, 33, SOFTWARE);
    classRoster.add("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, SECURITY);
    classRoster.add("A5", "Austin", "Johnson", "ajo3484@wgu.edu", 21, 24, 10, 37, SOFTWARE);

    //Showcase functionality of Roster
    std::cout<<"\nCurrent Roster:\n";
    classRoster.printAll();


    //Print invalid emails
    std::cout<<"\nPrinting Invalid Emails:\n";
    classRoster.printInvalidEmails();

    //Print avg days in course for every student
    std::cout<<"\nPrinting Average Number of Days in Course for all Students:\n";
    for (int i = 0; i < classRosterSize; i++) {
        if (classRoster.classRosterArray[i] != nullptr) {
            classRoster.printAverageDaysInCourse(
                classRoster.classRosterArray[i]->getStudentID()
            );
        }
    }


    //Print by Degree Program
    std::cout<<"\nPrinting all Software Students:\n";
    classRoster.printByDegreeProgram(SOFTWARE);

    //Showcase removal
    std::cout<<"\nRemoving Student A3:\n";
    classRoster.remove("A3");
    std::cout<<"\nCurrent Roster:\n";
    classRoster.printAll();
    std::cout<<"\n";
    classRoster.remove("A3");
    
    std::cout<<"\n";

    //Destructor
    //Valgrind showed 0 errors from 0 contexts
    for (int i = 0; i < classRosterSize; i++) {
        delete classRoster.classRosterArray[i];
    }

    std::cout<<"End Program\n";

}