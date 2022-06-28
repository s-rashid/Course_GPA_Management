#ifndef GPAMONITOR_H
#define GPAMONITOR_H

#include "Monitor.h"

class GPAMonitor : public Monitor {

    private: 
        int minGPA;
    public:
        GPAMonitor(int);
        virtual void update (Student *);
};

#endif