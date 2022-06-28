#include "Monitor.h"
#include <iostream>
#include <iomanip>

void Monitor::printLogs(){
    
    cout << endl << endl;
    cout << "Logs: "<< endl;
    for (int i =0; i < monitor.size(); i++){
        cout << monitor[i] << endl;         
    }
}