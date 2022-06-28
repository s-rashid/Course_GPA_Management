#ifndef MONITOR_H
#define MONITOR_H
#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include "Student.h"
#include "defs.h"


class Monitor 
{
    protected:
        vector<string> monitor;
    public:
        virtual void update (Student*) = 0;
        void printLogs();

};

#endif