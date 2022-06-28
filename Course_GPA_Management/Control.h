#ifndef CONTROL_H
#define CONTROL_H
#include <vector>
#include "View.h"
#include "Monitor.h"
#include "GPAMonitor.h"
#include "FWMonitor.h"
#include "StuServer.h"
#include <sstream>
class Control
{
    private:
        Storage storage;
        int     stuId, courseCode, grade, courseTerm;
        int     menuSelection;
        string courseInstructor;
        View view;
        vector<Monitor*> monitor;
        StuServer server;

    public:
        void launch();
        void notify (Student *);
        Control();
        ~Control();


};

#endif