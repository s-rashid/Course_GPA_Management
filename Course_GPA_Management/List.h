#ifndef LIST_H
#define LIST_H
#include <iostream>
using namespace std;
#include <string>
#include <cstdlib>

#include "Course.h"

template<class T>
class List
{
    
    protected:
        template<class N>
        class Node{
            friend class List;
            friend class CourseList;
            protected:
                N data;
                Node* next;
        };
    
        Node<T> *head;
        Node<T> *tail;
        

    public:
        List();
        ~List();
        void operator+= (T);
        void print();
            
};

#endif