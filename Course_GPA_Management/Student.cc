#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Student.h"

Student::Student(int i)
{
  id = i;

}

//used by other class for geting student id.
int Student::getID()
{
  return id;
}

//compute the gpa
float Student::computeGPA(){
  return courseList.computeGPA();
}

//compute the number of failed and withdrawn course.
int Student::computeNumFW(){
  return courseList.computeNumFW();
}

//take course pointer and add that to the array.
void Student::operator+= (Course *course){

 courseList.operator+=(course);

}



//print out the element of the course array and id.
void Student::print()
{
  cout << endl << "Id: " << id << setw(10) << "GPA:  " << setprecision(1) << fixed << computeGPA() << endl;
  courseList.print();
  cout << endl;
}

