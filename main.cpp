#include <iostream>
#include "student.h"
#include "roster.h"

int main() {
    Roster r;
    r.add("A1", "John", "Smith", "John1989@gm ail.com", 20, 30, 35, 40, SECURITY);
    r.add("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, 50, 30, 40, NETWORK);
    r.add("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, 20, 40, 33, SOFTWARE);
    r.add("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, SECURITY);
    r.add("A5", "Austin", "Johnson", "ajo3484@wgu.edu", 21, 24, 10, 37, SOFTWARE);

    r.printInvalidEmails();
}