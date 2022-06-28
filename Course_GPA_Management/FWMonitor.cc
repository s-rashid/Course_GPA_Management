#include "FWMonitor.h"

FWMonitor::FWMonitor(int i) : Monitor () {
    thershold = i;
}


/*check for student's failed of withdrawn coursed and if it's equal to or more than
  firxed threshold then add that info into log.*/
void FWMonitor::update(Student *stu){
    if (stu->computeNumFW() >= thershold)
    {
        string s = "Id: " + to_string(stu->getID()) + "          " + "NUM FW: "+ to_string(stu->computeNumFW());
        monitor.push_back(s);
    }
    
}