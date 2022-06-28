#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Storage.h"

Storage::Storage()
{
    numStudent = 0;

}


//destructor to free the dynamicall alocated memory
Storage::~Storage()
{
    for(int i = 0; i < numStudent; i++)
    {
        delete students[i];
        students[i] = NULL;
    }
}


//take student pointer and add that to array.
void Storage::operator+= (Student *stu)
{
    if (numStudent == MAX_NUM_STU){
        cout << "Failed to add new student. Student is full." << endl;
        return;
    }

  students[numStudent] = stu;
  numStudent++;
  
}



//print the content of the storage class.
void Storage::print()
{
    for (int i = 0; i < numStudent; i++){
        students[i]->print();
    }
}