#ifndef COURSE_H
#define COURSE_H
#include <iostream>
using namespace std;
#include <string>

class Course
{
  public:
    Course(int=0, int=0, int = 00000, string = " ");
    void print();
    bool lessThan (Course *);
    int getGrade();

  private:
    int code;	// course code, for example 2404 for COMP2404
    int grade;	// numeric grade from 0 (F) to 12 (A+), with -1 for WDN
    void getGradeStr(string&);
    int course_term;//term of the course
    string course_instructor;//name of the instructor.
};

#endif
