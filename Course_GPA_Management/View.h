#ifndef VIEW_H
#define VIEW_H


#include "defs.h"
#include "Storage.h"

class View
{
    private:
        int menuSelection;

    public:
        void mainMenu(int &);
        void studentId(int &);
        void studentInfo(int &, int &, int &, string &);
        void printStorage(Storage &);



};

#endif