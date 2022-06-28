#include "Control.h"


Control::Control(){
    GPAMonitor* gpa = new GPAMonitor(MIN_GPA);
    FWMonitor* fw = new FWMonitor(THRESHOLD);
    vector <string> serverInfo;
    stringstream ss;

    monitor.push_back(gpa);
    monitor.push_back(fw);

    server.retrieve(serverInfo);
    for (int i=0; i<serverInfo.size(); ++i) {
        ss.clear();
        ss.str(serverInfo[i]);
        ss >> stuId >> courseCode >> courseTerm >> grade >> courseInstructor;
        Student *s = new Student(stuId);//dynamic allocation of student
        storage += s;
        Course *c = new Course(courseCode, grade, courseTerm, courseInstructor);
        s->operator+=(c);
    }

}


Control::~Control()
{
    //delete all the data from monitor.
    for (int i = 0; i < monitor.size(); i++)
    {
        delete monitor[i];
    }
}

void Control::launch()
{
    while(1){
        //check for menu selection.
        view.mainMenu(menuSelection);

        if (menuSelection == 0){
            break;
        }
        else if (menuSelection == 1)
        {
            //input for student id
            view.studentId(stuId);
            Student *s = new Student(stuId);//dynamic allocation of student
            storage += s;

            //input for student course info 
            while(1){
                view.studentInfo(courseCode, grade, courseTerm, courseInstructor);             
                if (courseCode == 0)
                    break;
                //dynamic allocation of course
                Course *c = new Course(courseCode, grade, courseTerm, courseInstructor);
                s->operator+=(c);
            }
        
            notify(s);//call the notify member function.
        }
        menuSelection = -1;
    }

    cout << endl;
    view.printStorage(storage);
    
    //print the info from monitior.
    for (int i = 0; i < monitor.size(); i++)
    {
        monitor[i]->printLogs();
    }
}


//nofity the monitor for update for new student.
void Control::notify(Student *newStudent){

    for(int i = 0; i < monitor.size(); i++){
        monitor[i]->update(newStudent);
    }
}