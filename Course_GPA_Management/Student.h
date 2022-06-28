#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;
#include <string>
#include "defs.h"
#include "List.h"
#include "CourseList.h"

class Student
{
  public:
    Student(int=0);
    void print();
    void operator+= (Course*);
    float computeGPA();
    int computeNumFW();
    int getID();
  private:
    int    id;// id of the student
    CourseList  courseList;
    
};

#endif
