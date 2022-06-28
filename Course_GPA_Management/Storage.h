#ifndef STORAGE_H
#define STORAGE_H

#include "defs.h"
#include "Student.h"

class Storage
{
  public:
    Storage();//constructor
    ~Storage();
    void print();
    void operator+= (Student*);

  private:
    int numStudent;//number of student.
    Student *students[MAX_NUM_STU];//array of student pointers.

};

#endif
