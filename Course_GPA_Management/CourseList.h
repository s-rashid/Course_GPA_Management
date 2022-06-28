#ifndef COURSELIST_H
#define COURSELIST_H
#include <iostream>
using namespace std;
#include <string>
#include "List.h"
#include "Course.h"

class CourseList : public List <Course *>
{
    public:
        float computeGPA();
        int computeNumFW();

};

#endif
