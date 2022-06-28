#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Course.h"


//constructor 
Course::Course(int c, int g, int t, string s)
{
  code  = c;
  grade = g;
  course_term = t;
  course_instructor = s;
}


// use to get grade for class to use.
int Course::getGrade(){
  return grade;
}



//print the data members of course.
void Course::print()
{
  string str;

  cout << "-- COMP " << code << ":  ";
  cout << right << setw(2) << grade   << "  ";
  getGradeStr(str);
  cout << left << setw(3) << str;
  cout << right << setw(10) << course_term;
  cout << right << setw(10) << course_instructor << endl; 

}


//provieds gade as string.
void Course::getGradeStr(string& gradeStr)
{
  string gradeStrings[] = {
    "WDN", "F", "D-", "D", "D+", "C-", "C", "C+", 
    "B-", "B", "B+", "A-", "A", "A+" };

  if ( grade >= -1 && grade <= 12 )
    gradeStr = gradeStrings[grade+1];
  else
    gradeStr = "Unknown";
}


bool Course::lessThan(Course *course)
{

  if (code == course->code){
    return course_term < course->course_term;
  }
  else{
    return code < course->code;
  }
}