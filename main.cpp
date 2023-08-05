#include <iostream>
#include "student.h"
#include "roster.h"

int main() {
    Roster r;
    r.add("200215493", "Austin", "Johnson", "ajohnson132490@gmail.com", 21, 2, 3, 4, SOFTWARE);
    r.printAll();
}