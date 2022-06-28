#include "GPAMonitor.h"
#include <iostream>
#include <iomanip>
GPAMonitor::GPAMonitor(int i) : Monitor () {
    minGPA = i;
}

//check if students' gpa and if that equal to or below a minimum therhold then add that info inot a log.
void GPAMonitor::update(Student *stu){
    if (stu->computeGPA() <= minGPA)
    {
        string s = "Id: " + to_string(stu->getID()) + "          " + "GPA: "+ to_string(stu->computeGPA());
        monitor.push_back(s);
    }
    
}

