#include "List.h"
#include <cstdlib>

template <class T>
List<T>:: List()
{
    // Initialize the list head and tail
    head = NULL;
    tail = head;
    
}

template <class T>
List<T>::~List()
{
    Node <T> *currNode;
    Node <T> *nextNode;

    currNode = head;

    while(currNode != NULL){
        nextNode = currNode->next;
        delete currNode->data;
        delete currNode;
        currNode = nextNode;
    }
    
}

template <class T>
void List<T>::operator+= (T course)
{
    Node <T> *tmpNode;
    Node <T> *currNode;
    Node <T> *prevNode;

    tmpNode = new Node<T>;
    tmpNode->data = course;
    tmpNode->next = NULL;

    currNode = head;
    prevNode = NULL;

    /* 
   * If the list is empty (at the beginning) just adds
   * the node at the head
   */
    if (head == NULL)
    {
        head = tmpNode;
        
    }
    else
    {
        course = currNode->data;

        // Handles the situation if the list is not empty and
        // the node to be inserted is at the beginning of the list
        if (prevNode == NULL && tmpNode->data->lessThan(course)){
            tmpNode->next = currNode;
            head = tmpNode;
        }
        else
        {

            // iterates and sets the current and previous node pointers to find out the
            // correct position for the new node to be inserted.
            while(currNode != NULL && !tmpNode->data->lessThan(course)){
                prevNode = currNode;
                currNode = currNode->next;
                if (currNode != NULL){
                    course = currNode->data;
                }   
            }
            prevNode->next = tmpNode;
            tmpNode->next = currNode;
        }   
    }

    //set the tail to last node of the list.
    tail = tmpNode;
}





template <class T>
void List<T>::print()
{
    Node <T> *currNode = head;
    if (currNode == NULL){
        cout << "No course information available." << endl;
    }
    else{

        // iterates and list and invokes the print function of the node data 
        while (currNode != NULL)
        {
            currNode->data->print();
            currNode = currNode->next;
        }

        cout << "Head of the list: " << endl;
        head->data->print();
        cout << endl << endl;
        cout << "Tail of the list: " << endl;
        tail->data->print();
        cout << endl;
    }
}

template class List<Course *>;