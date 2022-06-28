#include "View.h"

void View::mainMenu(int &selection)
{
  int numOptions = 1;
  //int selection;

  cout << endl;
  cout << "(1) Add student" << endl;
  cout << "(0) Exit" << endl;

  while (selection < 0 || selection > numOptions) {
    cout << "Enter your selection: ";
    cin  >> selection;
  }

}


//for sutdent id
void View::studentId(int &stuId)
{
    cout << "student id:   ";
    cin  >> stuId;
}



//sutdent course info
void View::studentInfo(int &courseCode, int &grade, int &courseTerm, string &courseInstructor)
{
  
    cout << "course code <0 to end>:  ";
    cin  >> courseCode;
    if (courseCode != 0){
    cout << "grade:                   ";
    cin  >> grade;
    cout << "Course term:             ";
    cin >> courseTerm;
    cout << "Course instructor:       ";
    cin >> courseInstructor;
    }
}


//print student info
void View::printStorage(Storage &storage)
{
    storage.print();
}