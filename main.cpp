#include <iostream>
#include "student.h"

int main() {
    Student s(200215493, "Austin", "Johnson", "ajohnson132490@gmail.com", 21, new int[3]{2, 3, 8}, SOFTWARE);
    std::cout<<s.getStudentID()<<"\n";
    std::cout<<s.getNumDays()[2]<<"\n";
    s.setNumDays(new int[3]{240,5,6});
    std::cout<<s.getNumDays()[2]<<"\n";

}