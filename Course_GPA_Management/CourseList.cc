#include "CourseList.h"

//compute the gpa.
float CourseList::computeGPA(){
   Node <Course *> *currNode;
    currNode =  head;
    float gpa = 0.0;
    float count = 0.0;
    if (currNode == NULL){
        return 0;
    }
    else{
        while(currNode != NULL){
            float grade = currNode->data->getGrade();
            if ((grade <= 12.0 || grade >= 0.0) && grade != -1){
                gpa += grade;
                count++;
            }
            currNode = currNode->next;
        }
    }
    gpa /= count;

    return gpa;
     
}


//compute the number of failed and withdrawn course.

int CourseList::computeNumFW(){
    Node<Course *> *currNode = head;
    int count = 0;

    if (currNode == NULL){
        return 0;
    }
    else{
        while(currNode != NULL)
        {
            if (currNode->data->getGrade() <= 0){
                count++;
            }
            currNode = currNode->next;
        } 
    }
    return count;
}