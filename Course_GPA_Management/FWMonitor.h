#ifndef FWMONITOR_H
#define FWMONITOR_H

#include "Monitor.h"

class FWMonitor : public Monitor {

    private: 
        int thershold;
    public:
        FWMonitor(int);
        virtual void update (Student *);
};

#endif